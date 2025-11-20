// // // 	Recursion
// // //  nested functions Closure concepts variables as a function arrow function IIFE

// // // function outer() {
// // //   // function scope
// // //  inner();
// // //   console.log("outer function ");

// // //     function inner() {
// // //     console.log("inner function ");
// // //   }
// // // }

// // // outer();

// // //callback function
// // // A callback function is a function passed as an argument to another function, which is then "called back" or executed later

// // function sum(num1, num2, cb) {
// //   let result = num1 + num2;
// //   console.log(cb(result));
// // }

// // function square(value) {
// //   return value ** 2;
// // }

// // sum(25, 15, square);

// // //IIFE  An IIFE, or Immediately Invoked Function Expression, is a JavaScript pattern that defines and executes a function instantly as soon as it's created

// // (function () {
// //   console.log("iife");
// // })();

// //Closure  A closure is the combination of a function bundled together (enclosed) with references to its surrounding state (the lexical environment). In other words, a closure gives a function access to its outer scope.

// function outer() {
//   let a = 12;//state
//   let b = 23;

//   function inner() {//   lexical environment
//     console.log(a + b);
//   }

//   return inner;
// }

// let innerFun = outer();

// innerFun();

let string = "racecar"; // palindrome

// // for(let i=0;i<string.length;i++){
// //   console.log(string[i])
// // }

// // for(let j=string.length-1;j>=0;j--){
// //   console.log(string[j])
// // }

// console.log("java"+"avaj")

let string2 = "";

for (let j = string.length - 1; j >= 0; j--) {
  string2 += string[j];
}

if (string2 == string) {
  console.log("palindrome");
} else {
  console.log("not palindrome");
}
