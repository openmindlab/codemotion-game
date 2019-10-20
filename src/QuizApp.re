[%bs.raw {|require('./QuizApp.styl')|}];

type state = {
  hasChosen:     bool,
  choosen:       int,
  question:      string,
  difficulty:    int,
  choices:       list(choice),
  correctChoice: int
}

and choice = {
  number: int,
  text:   string
};

type action =
  | ChooseAnswer(int)
  | SetQuestion;

let resetState = () => {

  let randomQuestion = Questions.getRandomQuestion;

  {
    choosen:       0,
    difficulty:    randomQuestion.difficulty,
    question:      randomQuestion.question,
    choices:       List.mapi((i, value) => { text: value, number: i + 1 }, firstRandomQuestion.answers),
    correctChoice: randomQuestion.correct,
    hasChosen:     false
  }

};

[@react.component]
let make = () => {

  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch action {
          | ChooseAnswer(num) => { ...state, hasChosen: true, choosen: num }
          | SetQuestion       => { ...resetState }
        },
        resetState
    );

  let makeChoice = (selectedNumber: int) => 
    ChooseAnswer(selectedNumber) |> dispatch;

  let choiceComponents = List.map((a) =>
    <ChoiceButton 
      key=string_of_int(a.number)
      choose=makeChoice 
      num=a.number
      text=a.text
      isRightChoice={a.number == state.correctChoice}
      showResult=state.hasChosen
    />,
    state.choices
  );

  <div>
    <QuestionTitle text={state.question} />
    <DifficultyBadge level={state.difficulty} />
    <div className="choices-grid">
      (ReasonReact.array(Array.of_list(choiceComponents)))
    </div>
  </div>;

};
