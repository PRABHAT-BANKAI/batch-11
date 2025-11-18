// //normal function // function is a block of code //js is interpreter language

// function message() {
//   console.log("hello function ");
// }

// function sum(a = 1, b = 1) {
//   //parameters
//   message();

//   return a + b + b;
// }

// let result = sum();
// console.log(result);

// sum(123, 1);

// function findPrime(number) {
//   let count = 0;
//   for (let i = 1; i <= number; i++) {
//     if (number % i == 0) {
//       count++;
//     }
//   }
//   if(count ==2){
//     console.log(`${number}is prime`)// `` "" ''  "hello "world"""
//   }else{
//     console.log(`${number}is not prime`)
//   }
// }

// for (let i = 1; i <= 100; i++) {
//   if (i == 1) {
//     console.log("1 is co- prime");
//   } else {
//     findPrime(i);
//   }
// }

// let num = 10

// for(let i = 10; i>=1;i--){
//  if(i % 2 !=0){
//   console.log(`${i} Odd number`)
//  }else{
//    console.log(`${i} even number`)
//  }
// }

function tableShow(number) {
  for (let i = 1; i <= 10; i++) {
    console.log(`${number} * ${i} = ${number * i}`);
  }
}

for(let i=1;i<=20;i++){
tableShow(i);
}

