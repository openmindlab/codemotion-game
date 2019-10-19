[%bs.raw {|require('./QuizApp.styl')|}];

type state = {
  error:      bool,
  choosen:    int,
  question:   string,
  difficulty: int,
  choices:    list(choice)
}

and choice = {
  number: int,
  text:   string
};

type action =
  | Choose
  | SetQuestion;

let isRightChoice = (choice: int) => choice == 1;

let makeChoice = (selectedNumber: int) => {
  selectedNumber
    |> isRightChoice 
    |> Js.log
};

let initialState = {
  error:      false,
  choosen:    0,
  difficulty: 3,
  question:   "In mathematics and computer science, what is a Monad?",
  choices: [
    { number: 1, text: "It's just a monoid in the cathegory of endofunctors" },
    { number: 2, text: "A pretty name for flatMap" },
    { number: 3, text: "I actually have no idea what you're talking about!" },
    { number: 4, text: "A special Java class with hidden state and a lot of side-effects" },
  ]
};

let component = ReasonReact.reducerComponent("QuizApp");

let make = (_children) => {

  ...component,

  initialState: () => initialState,

  reducer: (action, state) =>
    switch action {
      | Choose      => ReasonReact.update({ ...state, error: false, choosen: 1 })
      | SetQuestion => ReasonReact.update({ ...state, error: false })
    };

  render: self => {

    let choiceComponents = List.map((a) =>
      <ChoiceButton 
        key={string_of_int(a.number)}
        choose=makeChoice 
        num={a.number}
        text={a.text}
      />,
      self.state.choices
    );

    <div>
      <QuestionTitle text={self.state.question} />
      <DifficultyBadge level={self.state.difficulty} />
      <div className="choices-grid">
        (ReasonReact.array(Array.of_list(choiceComponents)))
      </div>
    </div>;
  }
};
