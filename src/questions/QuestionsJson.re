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
    }
  ]
|};