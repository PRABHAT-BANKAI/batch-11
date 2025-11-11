// let const var

// es6
// let const

//var

// global scope // var
// block scope  // const let
// function scope //

// var userName = "superman"

// {
//    var userName = "PRABHAT"
// console.log(userName)
// }

//   console.log(userName)

// var userName = "superman"

// var userName = "ironman"

// let userName = "superman"
// userName = "ironman"

// var userName = "ironman"

// var user = "bob";

// {
//   console.log(user);
//   let user = "ben";
//   console.log(user);
// }

// console.log(user);

let a = 110;
let b = 120;
let c = 30;

if (a > b) {
  if (a > c) {
    console.log("a is greater than");
  } else {
    console.log("c is greater than");
  }
} else {
  if (b > c) {
    console.log("b is greater than ");
  } else {
    console.log("c is greater than");
  }
}

// if else ladder

let light = "green";

if (light === "red") {
  console.log("stop");
} else if (light === "yellow") {
  console.log("slow down");
} else if (light === "green") {
  console.log("go");
} else {
  console.log("invalid color");
}

let number = 3;

//  buzz
// fizz
// buzz fizz

if (number % 3 == 0 && number % 5 == 0) {
  console.log("buzzfizz");
} else if (number % 5 == 0) {
  console.log("fizz");
} else if (number % 3 == 0) {
  console.log("buzz");
}
