[%bs.raw {|require("./ChoiceButton.styl")|}];

[@react.component]
let make = (
  ~text: string,
  ~num: int,
  ~choose,
  ~isRightChoice: bool,
  ~showResult: bool
  ) => {

  let color: string = switch num {
    | 1 => "green"
    | 2 => "yellow"
    | 3 => "blue"
    | 4 => "red"
    | _ => "grey"
  };

  let finalColor          = isRightChoice ? "green" : "red";
  let finalBtnCssClass    = showResult ? "allover-" ++ finalColor : color;
  let finalCircleCssClass = showResult ? "hide" : color;

  <button 
    className={"choice-button " ++ finalBtnCssClass }
    onClick={(_event) => choose(num)}
  >
    { ReasonReact.string(text) }
    <div className={"button-circle " ++ finalCircleCssClass}> </div>
  </button>

}