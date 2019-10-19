[%bs.raw {|require('./Main.styl')|}];

type state = {
  error:   bool,
  choosen: int,
};

type action =
  | Choice;

let isRightChoice = (choice: int) => choice == 1;

[@react.component]
let make = (~greeting) => {

  let (state, dispatch) = React.useReducer((state, action) =>
  switch (action) {
  | Choice => { ...state, error: false, choosen: 1 }
  }, { choosen: 0, error: false});

  <div>

    <QuestionTitle text="In mathematics and computer science, what is a Monad?" />
    <DifficultyBadge level={3} />

    <div className="choices-grid">
      <ChoiceButton num={1} text="It's just a monoid in the cathegory of endofunctors"               />
      <ChoiceButton num={2} text="A pretty name for flatMap"                                         />
      <ChoiceButton num={3} text="I actually have no idea what you're talking about!"                />
      <ChoiceButton num={4} text="A special Java class with hidden state and a lot of side-effects"  />
    </div>

  </div>;
};
