for (let i = 0; i < 3; i++) {
  console.log("Привет!");
}

// for (начало; условие; шаг) {}
for (let i = 1; i <= 5; i++) {
  console.log("Повтор " + i);
}

for (let i = 2; i <= 10; i += 2) {
  console.log(i);
}

// Практика 1
for (let i = 5; i <= 15; i++) {
  console.log(i);
}

for (let i = 5; i >= 1; i--) {
  console.log(i);
}
console.log("Старт!");

/* бесконечный цикл
for (let i = 0; i >= 0; i++){
  console.log(i);
} */

let i = 1;
while (i <= 3) {
  console.log("Шаг " + i);
  i++;
}

let i2 = 5;
while (i2 > 0) {
  console.log(i2);
  i2--;
}

let money = 100;
while (money > 0) {
  console.log("Покупаю мороженое!");
  money -= 20;
}

let i3 = 10;
while (i3 >= 1) {
  console.log(i3);
  i3--;
}

let i4 = 1;
do {
  console.log(i);
  i++;
} while (i <= 3);

/* let password;
do {
  password = prompt("Введите пароль:");
} while (password !== "322");
console.log("Пароль принят!");

let number;
do {
  number = prompt("Введите число:");
} while (number !== "5");
console.log("Пароль принят!"); */

let fruits = ["яблоко", "банан", "груша"];
for (let fruit of fruits) {
  console.log(fruit);
}

for (let letter of "Привет") {
  console.log(letter);
}

let animals = ["собака", "кот", "белуга"];
for (let animal of animals) {
  console.log(animal);
}

let person = {
  name: "Вася",
  age: 16,
  city: "Минск",
  hobby: "Программирование",
};
for (let key in person) {
  console.log(key + ": " + person[key]);
}

for (let i = 1; i <= 10; i++) {
  if (i == 5) break;
  console.log(i);
}

for (let i = 1; i <= 5; i++) {
  if (i == 3) continue;
  console.log(i);
}

// Практика 2
for (let i = 1; i <= 10; i++) {
  if (i % 2 === 0) continue;
  console.log(i);
}

// Задача 1
let sum = 0;
for (let i = 1; i <= 5; i++) {
  sum += i;
}
console.log(sum);

// Задача 2
for (let i = 1; i <= 10; i++) {
  console.log(`3 * ${i} = ${3 * i}`);
}
