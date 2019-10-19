[%bs.raw {|require("./ChoiceButton.styl")|}];

[@react.component]
let make = (~text: string, ~num: int) => {

  let color: string = switch num {
  | 1 => "green"
  | 2 => "yellow"
  | 3 => "blue"
  | 4 => "red"
  | _ => "grey"
  };

  <button className={"choice-button " ++ color}>
    { ReasonReact.string(text) }
    <div className={"button-circle " ++ color}> </div>
  </button>

}