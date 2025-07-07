// ⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇⏇
//   Exercise 5 – Classes
// ⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈⏈

// Objectives:
// • Create classes with typed properties and methods
// • Add access modifiers to class members

export default () => {

  // ======== Exercise 5.1 ========
  // Goals:
  // • Add explicit parameter type to the greet method
  // • Add explicit return type to the greet method

  class MC {
    greet(event : string = 'party') : string {
      return `Welcome to the ${event}`;
    }
  }

  const mc = new MC();
  console.log('[Exercise 5.1]', mc.greet('show'));


  // ======== Exercise 5.2 ========
  // Goals:
  // • Add explicit parameter types to constructor
  // • Add typed parameters for storing values

  class Person {
    name: string;
    age: number;
    constructor(name: string, age: number) {
      this.name = name;
      this.age = age;
    }
  }

  const jane = new Person('Jane', 31);

  console.log('[Exercise 5.2]', `The new person's name is ${jane.name}.`);


  // ======== Exercise 5.3 ========
  // Goals:
  // • Explicitly make the title and salary properties publicly available
  // • Reduce class to three lines of code while maintaining functionality

  class Employee {
    constructor(public title: string, public salary: number) {}
  }

  const employee = new Employee('Engineer', 100000);

  console.log('[Exercise 5.3]', `The new employee's title is ${employee.title} and they earn $ ${employee.salary}.`);

}