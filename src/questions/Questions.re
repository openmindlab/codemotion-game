let data = QuestionsJson.questions;

/* Random seed */
Random.init(int_of_float(Js.Date.now()));

type questionsJson = {
  question:   string,
  correct:    int,
  answers:    list(string),
  difficulty: int
};

module Decode = {

  let question = json =>
    Json.Decode.{
      question:   json |> field("question",   string),
      correct:    json |> field("correct",    int),
      answers:    json |> field("answers",    list(string)),
      difficulty: json |> field("difficulty", int)
    };

  let all =
    question 
    |> Json.Decode.array;

};

let decodedQuestions: array(questionsJson) =
  data
  |> Json.parseOrRaise
  |> Decode.all;

let getRandomQuestion = () =>
  decodedQuestions[
    decodedQuestions 
    |> Array.length 
    |> Random.int
  ];