Random.init(int_of_float(Js.Date.now()));

let data = {|
  [{"question":"In mathematics and computer science, what is a Monad?","answers":["It's just a pretty name for flatMap","An endofunctor in the cathegory of monoids","A class with a lot of side-effects and hidden state","Monads is not related to mathematics and computer science"],"correct":2,"difficulty":3},{"question":"In mathematics and computer science, what is a Monoid?","answers":["A binary operation that must respect the associativity rule and must have an identity value","Just a pretty name for Map","A wrapper around a ternary operation","An Applicative function"],"correct":1,"difficulty":3}]
|};

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
    Json.Decode.array(question);
};

let decodedQuestions: array(questionsJson) =
  data
  |> Json.parseOrRaise
  |> Decode.all;

let getRandomQuestion =
  decodedQuestions[Array.length(decodedQuestions) |> Random.int];