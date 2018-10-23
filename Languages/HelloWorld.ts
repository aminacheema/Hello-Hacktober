interface Person {
    firstName: string;
    lastName: string;
}

function greeter(person: Person) {
    return "Hello, " + person.firstName + " " + person.lastName;
}

function hello() {
    return "Hello, World!";
}

let user = { firstName: "Jane", lastName: "User" };

document.body.innerHTML = hello();
document.body.innerHTML = greeter(user);