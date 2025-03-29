
let user = {
  name: "Abdo",
  age: 20,

  sayHello: function () {
    console.log("Hello " + this.name);
  },
}

console.log(user.name);
console.log(user.age);
user.sayHello();