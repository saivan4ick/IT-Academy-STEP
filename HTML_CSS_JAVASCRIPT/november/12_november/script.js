let item = {
    title: "книга",
    pages: 200,
    available: true
};
console.log(item.title);

let colors = ["красный", "зеленый", "синий"];
console.log(colors[0]);

let text = "Пример текста";  // String
let number = 25;  // Number
let ready = true;  // Boolean
let emptyBox = null;  // Null
let something;  // Underfined

let text2 = "ПРИВЕТ";
console.log(typeof text2);

let color = "синий";
console.log("Мой любимый цвет - " + color + "!");
console.log(`Мой любимый цвет - ${color}!`);

// Практическое
let name = "Вася";
let age = 16;
let learning = true;
console.log(name, age, learning);
let hobby = ["программирование", "плаванье", "сидеть за техникой"];
console.log(hobby);
let item2 = {
    title: "Компьютер",
    cpu: "AMD Ryzen 3 2200g",
    gpu: "AMD Radeon Vega 8",
    ram: "12 GB DDR",
    available: true,
}
console.log(item2.title, item2.cpu, item2.gpu, item2.ram)

let isRaining = true;
if (isRaining) {
    console.log("Возьми зонт ");
}
let buttonPressed = false;
if (buttonPressed) {
    console.log("Кнопка нажата!");
}

let temperature = 25;
if (temperature > 20) {
    console.log("На улице тепло ");
}
else (temperature < 20);
{
    console.log("На улице холодно ");
}

let score = 30;
if (score > 50) {
    console.log("Ты выиграл!");
}

let number2 = 55;
if (number2 > 0) {
    console.log("Позитивное число");
}

let is_weekend = false;
if (is_weekend == true) {
    console.log("Отдыхаем");
} else {
    console.log("Работаем");
}

let grade = 8;
if (grade >= 9) {
    console.log("Отлично");
} else if (grade >= 7) {
    console.log("Хорошо");
} else if (grade >= 5) {
    console.log("Удовлетворительно");
} else {
    console.log("Нужно подтянуться");
}