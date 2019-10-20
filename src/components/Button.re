[%bs.raw {|require("./Button.styl")|}];

[@react.component]
let make = (~click) => {
  <button 
    onClick=click
    className="btn white"
  >
    { ReasonReact.string("Next Question") }
  </button>
};