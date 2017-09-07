let component = ReasonReact.statelessComponent "App";

let make ::message _children => {
  ...component,
  render: fun _self =>
    <div className="App">
      <h2> (ReasonReact.stringToElement message) </h2>
    </div>
};
