[%bs.raw {|require("./DifficultyBadge.styl")|}];

[@react.component]
let make = (~level: int) => {

  let (color: string, text: string) =
    switch (level) {
      | 3 => ("red"    , "difficult")
      | 2 => ("yellow" , "moderate")
      | 1 => ("green"  , "easy")
      | _ => ("grey"   , "unknown")
    };

  <div className={"difficulty-badge " ++ color}> 
    { ReasonReact.string(text) }
  </div>

}