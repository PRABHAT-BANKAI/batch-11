let email = "asd@gmail.com";
let password = 12345678;

if (email === "asd@gmail.com" && password === 12345678) {
  console.log("login succesfully");
} else {
  console.log("invalid email and password");
}

let number = 75;

if (number > 60 && number < 100) {
  console.log("the number between 60 to 100");
} else if (number > 40 && number < 60) {
  console.log("the number between 40 to 60");
}

let word = "aaaaa";

console.log(word[2]);
console.log(word.length);

// output 3
let count = 0;
for (let i = 0; i < word.length; i++) {
  if (
    word[i] == "a" ||
    word[i] == "e" ||
    word[i] == "o" ||
    word[i] == "i" ||
    word[i] == "u"
  ) {
    console.log("yes");
  } else {
    console.log("no");
  }
}

console.log(count);

console.log(Date.now());

console.log(Math.max(23, 54, 6, 7, 43, 2, 111, 1));
console.log(Math.min(23, 54, 6, 7, 43, 2, 111, 1));

let value = Infinity;

console.log(+"123");
let result = Number("123");
console.log(result);

console.log(12 + +"123");

console.log(true -false)//1-0
