[%bs.raw {|require("./QuestionTitle.styl")|}];

[@react.component]
let make = (~text: string) => {
  <h1 className="question-title">
    { ReasonReact.string(text) }
  </h1>
}