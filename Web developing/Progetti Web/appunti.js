//Variable Declarations and Data Types in JavaScript
let firstName = 'Ashif'; //String Literal
let lastName = 'Chowdhury'; //String Literal
let fullName = firstName + ' ' + lastName; //String Literal
let age = 25; //Number Literal
let year = new Date().getFullYear();

console.log('Full Name: ' + fullName);
console.log('Age: ' + age);
console.log('Year: ' + year);

//Object Literal
let persone = {
    firstName: 'Ashif',
    lastName: 'Chowdhury',
    age: 25,
    hobbies: ['music', 'sports'],
};

//Dot Notation
persone.firstName = 'John';

// Bracket Notation
persone['lastName'] = 'Doe';

console.log('Person Name: ' + persone.firstName + ' ' + persone.lastName);
