const fs  = require("fs");
const csv = require("csvtojson");

csv()
  .fromFile(`${__dirname}/questions.csv`)
  .then((obj) => {
    const formattedJson = obj.map((obj) => ({
      question: obj["Question (in english, programming-related)"],
      answers: [
        obj["Answer #1"],
        obj["Answer #2"],
        obj["Answer #3"],
        obj["Answer #4"],
      ],
      correct: parseInt(obj["Right Answer"]),
      difficulty: parseInt(obj["Difficulty Level (higher is more difficult)"])
    }));

    fs.writeFileSync("questions.json", JSON.stringify(formattedJson, null, 2));
  })
  .catch((err) => console.err(err));