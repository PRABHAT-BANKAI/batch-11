// normal function

show();
function show() {
  console.log("hello");
}

show();

// variable function

console.log(number);

var number = 12;
// sum(1, 1);
let sum = function (a, b) {
  return a + b;
};

const result = sum(12, 5);
console.log(result);

// hoisting => behaviour javascript

console.log(age);
var age = 12;
console.log(age);

function print() {
  console.log(age);
  var age = 46;
  console.log(age);
}

print();

// arrow function//Arrow functions are a concise syntax for writing function expressions in JavaScript, introduced in ECMAScript 2015 (ES6)

const showName = () => {
  console.log("hello arrow function ");
};

showName();

const multi = a => a+2*2 ;
console.log(multi(1, 2));





let userName = "prabhat"
//output ={a:2,b:1}


let findVowel = (input)=>{
  let n = input.length
let count = 0
  for(let i=0;i<n;i++){
    if(input[i]=="a"||input[i]=="i"||input[i]=="o"||input[i]=="u"||input[i]=="e"){
      count ++
    }
  }


  return count
}

console.log(findVowel(userName))