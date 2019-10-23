let questions = {|
  [
  {
    "question": "In mathematics and computer science, what is a Monad?",
    "answers": [
      "It's just a pretty name for flatMap",
      "It's a monoid in the cathegory of endofunctors",
      "A class with a lot of side-effects and hidden state",
      "Monads are not related to mathematics and computer science"
    ],
    "correct": 2,
    "difficulty": 3
  },
  {
    "question": "Which one of the following is a purely functional language?",
    "answers": [
      "Java",
      "Ruby",
      "LISP",
      "Haskell"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "What is the output of the following expression in JS? (() => ({}))();",
    "answers": [
      "undefined",
      "An empty object",
      "An empty array",
      "null"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "What does HTML stand for?",
    "answers": [
      "Hyper Trainer Marking Language",
      "Hyper Text Marketing Language",
      "Hyper Text Markup Language",
      "Hyper Text Markup Leveler"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "In Java, a method is a container that holds classes",
    "answers": [
      "True",
      "False",
      "Depends on the method itself",
      "Java has no classes"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "Which of the following statements about Java methods is false?",
    "answers": [
      "Variables declared in a method cannot be used outside that method",
      "Methods are used to avoid putting comments in code",
      "A method provides a way of breaking a task down into subtasks",
      "A method provides a way of reusing code"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "What is a JavaScript closure?",
    "answers": [
      "A class that has access to all the local variables",
      "A global variable",
      "An anonymous function",
      "An inner function that has access to the outer (enclosing) function's variables-scope chain."
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Translator which is used to convert codes of assembly language into machine language is termed as",
    "answers": [
      "Assembler",
      "Attempter",
      "Compiler",
      "Debugger"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "Animations and interactivity with user on web pages can be done by",
    "answers": [
      "PHP",
      "JavaScript",
      "Visual Basic",
      "C#"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "Programming language which sometimes called \"write once, run anywhere\" is",
    "answers": [
      "Java",
      "Pascal",
      "Basic",
      "Ada"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Programming language which uses both object-oriented programming and functional programming paradigms is",
    "answers": [
      "Pascal",
      "Ada",
      "PHP",
      "Scala"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "Law which states that every year or two, capacities of computers have approximately doubled without any increase in price is",
    "answers": [
      "Moral's Law",
      "Moore's Law",
      "Malid's Law",
      "Module's Law"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "Processor which implements multiple processors on a single integrated circuit chip is termed as",
    "answers": [
      "Single core processor",
      "Dual core processor",
      "Multi core processor",
      "Quad core processor"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "What is the return type of Constructors? (Java)",
    "answers": [
      "int",
      "float",
      "void",
      "none of the mentioned"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which keyword is used by the method to refer to the object that invoked it? (Java)",
    "answers": [
      "this",
      "import",
      "abstract",
      "catch"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "What does URL stands for?",
    "answers": [
      "Uniform Resource Locator",
      "Uniform Resource Latch",
      "Universal Resource Locator",
      "Universal Resource Latch"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Which of these methods is used in Java to know the full URL of an URL object?",
    "answers": [
      "fullHost()",
      "getHost()",
      "ExternalForm()",
      "toExternalForm()"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "Which of these class is used in Java for operating on request from the client to the server?",
    "answers": [
      "http",
      "httpd",
      "httpConnection",
      "httpDecoder"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "What does local IP address start with?",
    "answers": [
      "10.X.X.X",
      "172.X.X.X",
      "10.X.X.X, 172.X.X.X, or 192.168.X.X",
      "192.168.X.X"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "Which of the following is not OOPS concept in Java?",
    "answers": [
      "Inheritance",
      "Encapsulation",
      "Polymorphism",
      "Compilation"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which concept of Java is achieved by combining methods and attribute into a class?",
    "answers": [
      "Inheritance",
      "Polymorphism",
      "Encapsulation",
      "Abstraction"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "Which of these keywords are used for generating an exception manually?",
    "answers": [
      "try",
      "catch",
      "throw",
      "check"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "Which of the following is a stateless protocol?",
    "answers": [
      "HTML",
      "XHTML",
      "HTTP",
      "XML"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "Which of the following is not a JS WebSocket event?",
    "answers": [
      "open",
      "close",
      "error",
      "deny"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "How can you send data using a Worker object in JS?",
    "answers": [
      "sendMessage()",
      "postMessage()",
      "Message()",
      "post()"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "Which one of the following is NOT a purely functional language",
    "answers": [
      "Idris",
      "Haskell",
      "Erlang",
      "Elm"
    ],
    "correct": 3,
    "difficulty": 3
  },
  {
    "question": "What is a pure function?",
    "answers": [
      "A function that only depend on its class state",
      "A function that does not depend on a state and does not cause any side effect during execution",
      "A function that doesn't need to be tested",
      "A function that produces a non-deterministic output"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "The oldest functional programming language still in use is",
    "answers": [
      "Haskell",
      "Java",
      "PHP",
      "LISP"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "First Object Oriented language ever created",
    "answers": [
      "Simula",
      "Smalltalk",
      "Java",
      "Objective-C"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "Which one of the following is not a programming language?",
    "answers": [
      "Miranda",
      "Idris",
      "Brainfuck",
      "Spring"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which one of the following libraries doesn't use a Virtual DOM",
    "answers": [
      "Vue",
      "Angular",
      "Svelte",
      "React"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "Where can we use Redux?",
    "answers": [
      "React",
      "Vue",
      "Angular",
      "In any JavaScript application"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which architecture inspired JavaScript's famous Redux state container?",
    "answers": [
      "The PureScript architecture",
      "Rx.js",
      "Spring (Java framework)",
      "The Elm architecture"
    ],
    "correct": 4,
    "difficulty": 3
  },
  {
    "question": "Which one of the following is not an Object Oriented language?",
    "answers": [
      "C",
      "Java",
      "PHP",
      "C#"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "K.I.S.S stands for",
    "answers": [
      "Keep it super simple",
      "Keep it sever side",
      "Keep it side (by) side",
      "Keep it stupid simple"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "Who is attributed with inventing Git?",
    "answers": [
      "Linus Torvalds",
      "Richard Stallman",
      "Dennis Ritchie",
      "Tony Hoare"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "After you initialize a new Git repository and create a file named git-quiz.html, which of the following commands will not work if issued?",
    "answers": [
      "git add git-quiz.html",
      "git status",
      "git add .",
      "git commit -m \"git quiz web file added\""
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which vendor acquired GitHub for $7.5 billion in June 2018?",
    "answers": [
      "Oracle",
      "Microsoft",
      "IBM",
      "Google"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "Which command should you use to initialize a new Git repository?",
    "answers": [
      "git bash",
      "git install",
      "git init",
      "git start"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "Which one of the following is not a frontend library/framework?",
    "answers": [
      "Spring",
      "Elm",
      "Vue",
      "React"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "Which technology aims to replace REST?",
    "answers": [
      "HTTP/2",
      "HTTP/3",
      "GraphQL",
      "QUIC"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "How do you check the state of your local git repository since your last commit?",
    "answers": [
      "git status",
      "git check",
      "git commit",
      "git diff"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "How do you supply a commit message to a commit?",
    "answers": [
      "git message \"I'm coding\"",
      "git add \"I'm coding\"",
      "git commit \"I'm coding\"",
      "git commit -m \"I'm coding\""
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "What does CSS stand for?",
    "answers": [
      "Creative Style Sheets",
      "Colorful Style Sheets",
      "Cascading Style Sheets",
      "Computer Style Sheets"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "How do you display hyperlinks without an underline?",
    "answers": [
      "a { text-decoration: no underline }",
      "a { decoration: no underline }",
      "a { text-decoration: none }",
      "a { underline: none }"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "Which of the following selector selects the elements that are checked?",
    "answers": [
      ":checked",
      "::after",
      "E ~ F",
      "none of the mentioned"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Which of the following selector selects an element if it’s the only child of its parent?",
    "answers": [
      ":root",
      ":nth-oftype(n)",
      ":only-child",
      ":child"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "The combination of Red, Green and Blue values from?",
    "answers": [
      "0 to 255",
      "0 to 254",
      "0 to 256",
      "0 to 253"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Multiple font faces are separated by?",
    "answers": [
      "Comma",
      "Semicolon",
      "Dot",
      "Slash"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Inside which HTML element do we put the JavaScript?",
    "answers": [
      "<js>",
      "<scripting>",
      "<script>",
      "<javascript>"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "In JavaScript, a function with no return value is sometimes called",
    "answers": [
      "Procedures",
      "Method",
      "Static function",
      "Dynamic function"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "What does SQL stand for?",
    "answers": [
      "Structured query language",
      "Structured query list",
      "Simple query language",
      "Sql query language"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Which one of the following is a NoSQL database?",
    "answers": [
      "MySQL",
      "PostgresSQL",
      "MariaDB",
      "CouchDB"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "Which of the SQL statements is correct?",
    "answers": [
      "SELECT username AND password FROM Users",
      "SELECT username, password FROM users",
      "SELECT username, password WHERE username = 'user1'",
      "SELECT username AND password WHERE username = 'user1'"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "Which SQL keyword is used to retrieve only unique values?",
    "answers": [
      "DISTINCTIVE",
      "UNIQUE",
      "DISTINCT",
      "DIFFERENT"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "Which SQL statement is used to delete data FROM a database?",
    "answers": [
      "COLLAPSE",
      "REMOVE",
      "ALTER",
      "DELETE"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "Which command undo all the updates performed by the SQL in the transaction?",
    "answers": [
      "ROLLBACK",
      "COMMIT",
      "TRUNCATE",
      "DELETE"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "Which of the following SQL commands can be used to add data to a database table?",
    "answers": [
      "ADD",
      "UPDATE",
      "APPEND",
      "INSERT"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "What is an SQL virtual table that is constructed from other tables?",
    "answers": [
      "view",
      "A relation",
      "Just another table",
      "Query results"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "What SQL command can be used to delete columns from a table?",
    "answers": [
      "MODIFY TABLE TableName DROP ColumnName",
      "MODIFY TABLE TableName DROP COLUMN ColumnName",
      "ALTER TABLE TableName DROP ColumnName",
      "ALTER TABLE TableName DROP COLUMN ColumnName"
    ],
    "correct": 4,
    "difficulty": 2
  },
  {
    "question": "Which of the following acronyms is part of the Java world?",
    "answers": [
      "JIT",
      "GIT",
      "JDK",
      "JFK"
    ],
    "correct": 3,
    "difficulty": 1
  },
  {
    "question": "What does JDK mean?",
    "answers": [
      "John David Kennedy",
      "Java Development Kit",
      "Java Deploy Kit",
      "Java Delay Kit"
    ],
    "correct": 2,
    "difficulty": 1
  },
  {
    "question": "In Java byte, short, int and long are all",
    "answers": [
      "Signed",
      "Unsigned",
      "Both of the above",
      "None of these"
    ],
    "correct": 1,
    "difficulty": 2
  },
  {
    "question": "Size of int in Java is",
    "answers": [
      "16 bit",
      "32 bit",
      "64 bit",
      "Depends on the execution environment"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "What shell command is used to count the total number of lines, words, and characters contained in a file?",
    "answers": [
      "countw",
      "wc",
      "wcount",
      "countlns"
    ],
    "correct": 2,
    "difficulty": 2
  },
  {
    "question": "How do you exit vim?",
    "answers": [
      ":halt",
      ":exit",
      ":q",
      "You can't exit from vim"
    ],
    "correct": 3,
    "difficulty": 3
  },
  {
    "question": "Which of the following is not a Linux text editor?",
    "answers": [
      "pico",
      "vim",
      "nano",
      "notepad++"
    ],
    "correct": 4,
    "difficulty": 1
  },
  {
    "question": "What is Docker?",
    "answers": [
      "A set of platform-as-a-service (PaaS) products that use OS-level virtualization to deliver software in packages called containers.",
      "An amazing whale that lives in the pacific ocean",
      "A Windows virtual machine",
      "A JVM emulator"
    ],
    "correct": 1,
    "difficulty": 1
  },
  {
    "question": "Which of the following is not an attribute used with SVG ellipse? (CSS)",
    "answers": [
      "cx",
      "cy",
      "rr",
      "ry"
    ],
    "correct": 3,
    "difficulty": 2
  },
  {
    "question": "Which of the following CSS property is used to define which properties a transition will be applied to?",
    "answers": [
      "animation-property",
      "transition-property",
      "css3-property",
      "none of the mentioned"
    ],
    "correct": 2,
    "difficulty": 1
  }
]
|};