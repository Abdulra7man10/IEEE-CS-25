/*
  String Challenge
  All Solutions Must Be In One Chain
  You Can Use Concatenate
*/

let a = "Elzero Web School";

// Include This Method In Your Solution [slice, charAt]
console.log(a.charAt(2).toUpperCase() + a.slice(3, 6)); // Zero

// 8 H
console.log("H".repeat(8)); // HHHHHHHH

// Return Array
console.log(a.slice(0,6).split("")); // ["Elzero"]

// Use Only "substr" Method + Template Literals In Your Solution
console.log(a.substr(0, 6) + ` ` + a.substr(11, 6)); // Elzero School

// Solution Must Be Dynamic Because String May Changes
console.log(a[0].toLowerCase() + a.slice(1).toUpperCase()); // eLZERO WEB SCHOOl