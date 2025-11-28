// // // JS Objects ( PPT) Object Property, Object Methods

// // //In JavaScript, an object is a non-primitive data type used to store collections of data and more complex entities.and create key value pairs

// // let employee = {
// //   userName: "batman",
// //   age: 55,
// //   deginsation: ["CEO", "developer", "founder"],
// //   show:function(){
// //     console.log("hello from abcd company")
// //   }
// // };

// // console.log(typeof employee);

// // // bracket notation

// // console.log(employee["userName"])
// // // dot notation
// // console.log(employee.age)

// // console.log(employee.deginsation[0])

// // employee.show()

// let student = {
//   userName: "zed",
//   subject: {
//     hindi: 55,
//     english: 88,
//     maths: 77,
//   },
// };

// let array = ["hindi","english","maths"]

// // console.log(student.subject.hindi)

// // console.log(student.subject["hindi"])

// // console.log(student.subject[array[0]])
// // console.log(student.subject.array[0]) wrong way

// let sum = 0
// for(let i=0;i<array.length;i++){
// sum+= student.subject[array[i]]
// }

// console.log(sum)

// let average = sum/3
// console.log(average)

// for of => array
// for in => object

// let array = [1,2,3,4,5,6,7,8,8]

// for(let element of array){
//   console.log(element)
// }

let product = {
  title: "shoes",
  price: 12000,
  brand: "adidas",
  size: "xll",
  category: "sports shoes",
};

for(key in product){
  console.log(key)
  console.log(product[key])
}
