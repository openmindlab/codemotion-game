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
  | Choose
  | SetQuestion;

let firstRandomQuestion = Questions.getRandomQuestion;

let initialState = {
  hasChosen:  false,
  choosen:    0,
  difficulty: 3,
  question:   "What is a monad?",
  choices: [
    { number: 1, text: "It's just a monoid in the cathegory of endofunctors" },
    { number: 2, text: "A pretty name for flatMap" },
    { number: 3, text: "I actually have no idea what you're talking about!" },
    { number: 4, text: "A special Java class with hidden state and a lot of side-effects" },
  ],
  correctChoice: 1
};

[@react.component]
let make = () => {

  let (state, dispatch) =
    React.useReducer(
      (state, action) =>
        switch action {
          | Choose      => { ...state, hasChosen: true }
          | SetQuestion => { ...state, hasChosen: false }
        },
        initialState
    );

  let makeChoice = (selectedNumber: int) => dispatch(Choose);

  let choiceComponents = List.map((a) =>
    <ChoiceButton 
      key={string_of_int(a.number)}
      choose=makeChoice 
      num={a.number}
      text={a.text}
      isRightChoice={a.number == state.correctChoice}
      showResult={state.hasChosen}
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
