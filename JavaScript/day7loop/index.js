// //while loop
// // do while loop
// //for loop

// for (let i = 5; i >= 1; i--) {
//   console.log(i);
// }

// let i = 0;

// while (i <= 10) {
//   if (i % 2 == 0) {
//     console.log(i, "even");
//   } else {
//     console.log(i, "odd");
//   }
//   i++;
// }

// let j = 0;

// do {
//   console.log(j);
//   j++;
// } while (j <= 5);

// for (let i = 1; i <= 5; i++) {
//   let str = "";
//   for (let j = 1; j <= i; j++) {
//     str += "*"; // concatenate
//   }
//   console.log(str)
// }

// console.log("hello" + "world");

// *
// **
// ***
// ****
// *****

// let str = "";
// for (let i = 1; i <= 5; i++) {
//   str += "*";//"**"
//   console.log(str);
// }


// "  *"
// " **"
// "***"


// ## Q4
// Detect Perfect Numbers
// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself). Write a program using a for loop to check if a given number is a perfect number.
// // Input: number = 28
// // Output: 1 + 2 + 4 + 7 + 14 = 28



let number = 20

let str = ""
let sum = 0
for(let i=1;i<number;i++){
if(number%i==0){
  str+= i+"+"
  sum+=i
}
}

if(sum==number){
  console.log("perfect number")
}else{
  console.log("not perfect number")
}

console.log(str)