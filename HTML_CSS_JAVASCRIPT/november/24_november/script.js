function showMessage(from,text) {
    alert(from + ',' + text);
}
showMessage('Привет,');

function great(name) {
    console.log("Привет, "+name);
}
great("Алекс");

function sum(a,b){
    console.log(a+b);
}
sum(5,7);

function sum2(a,b){
    return a + b;
}
let result=sum(1,2);
alert(result);

function test(){
    return 10;
    console.log("Это не выполнится");
}

const sayHi = function() {
    console.log("Привет!");
};
sayHi();

const generateSumFinder = () => {
    const sum = (a,b) => a+b;
    return sum;
};
const sum = generateSumFinder();
sum(1,5);

function hello() {
    console.log("Привет!");
}

const hi = function() {
    console.log("привет!");
}

// button.onlick=function(){
//     console.log("Клик!");
// }

setTimeout(function(){
    console.log("Прошло 2 секунды");
}, 2000);

setInterval(function() {
    console.log("тик");
}, 1000);

const sum = (a,b) => a+b;

const show = () => {
    console.log("hello");
}

const square = x => x * x;
console.log(square(5));
let result = square(4);
console.log(result);

const obj = {
    name: "Test",
    show() {
        console.log(this.name);
    }
};
obj.show();

function show() {
    console.log(arguments);
};
show(1,2,3);

const show = (...args) => {
    console.log(args);
};

function User(name) {
    this.name = name;
}
new User("Anna");

const double = n => n * 2;

setTimeoutO(() => console.log("Прошло время", 1000));

const numbers = [1,2,3];
const doubled = numbers.map(n => n * 2);

const user = {
    name: "Alex",
    sayHi() {
        console.log(this.name);
    }
}

setTimeout(() => {
    console.log("Прошло 2 секунды");
}, 2000);