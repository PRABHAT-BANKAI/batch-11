// //what is array  // array is a collection of multiple data types in js

// //Array With Functions Push ,Pop, shift, upshifts, Splice string function ,slice
// // let arr = [12,4,55,0,1,"batman"]// index number
// // //         0, 1 ,2 ,3, 4,5

// // let arr2 = []// non primitive // reference type

// // arr2[0] = "superman",

// // arr2[2] = "batman"

// // console.log(arr2)

// // console.log(arr[6])

// let array = [1, 2];

// let result = array.push(5);
// console.log(result);
// console.log(array);
// console.log(array.length);

// let store = array.pop();
// console.log(store);
// console.log(array);

// let store2 = array.shift();

// console.log(array);
// console.log(store2);

// array.unshift(33);
// console.log(array);

function count(num) {//2
  if (num == 10+1) {// exit base
    return;
  }



  
  console.log(num);//2

  count(num + 1);//3
}

count(1);
