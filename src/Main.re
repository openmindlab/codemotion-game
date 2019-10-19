[%bs.raw {|require('./Main.styl')|}];

/* State declaration */
type state = {
  count: int,
  show: bool,
};

/* Action declaration */
type action =
  | Click
  | Toggle;

/* Reason-React component */
[@react.component]
let make = (~greeting) => {
  let (state, dispatch) = React.useReducer((state, action) =>
  switch (action) {
  | Click => {...state, count: state.count + 1}
  | Toggle => {...state, show: ! state.show}
  }, {count: 0, show: true});

  let message =
    "You've clicked this " ++ string_of_int(state.count) ++ " times(s)";
  <div className="main-cont">

    <QuestionTitle text="In mathematics and computer science, what is a Monad?" />
    <DifficultyBadge level={3} />

    <div className="choices-grid">
      <ChoiceButton num={1} text="It's just a monoid in the cathegory of endofunctors"               />
      <ChoiceButton num={2} text="A pretty name for flatMap"                                         />
      <ChoiceButton num={3} text="I actually have no idea what you're talking about!"                />
      <ChoiceButton num={4} text="A special Java class with hidden state and a lot of side-effects"  />
    </div>

    <button onClick={_event => dispatch(Click)}>
      {ReasonReact.string(message)}
    </button>
    <button onClick={_event => dispatch(Toggle)}>
      {ReasonReact.string("Toggle greeting")}
    </button>
    {state.show ? ReasonReact.string(greeting) : ReasonReact.null}
  </div>;
};
