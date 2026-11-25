let userAge = prompt("Введите ваш возраст:");
if (userAge >= 18) {
  console.log("Доступ разрешён");
} else {
  console.log("Доступ запрещён");
}

let a = 10;
let b = 7;
if (a > b) {
  console.log("Большее число: " + a);
} else if (b > a) {
  console.log("Большее число: " + b);
} else {
  console.log("Они равны");
}

let t = 15;
if (t < 0) {
  console.log("Мороз");
} else if (t >= 0 && t <= 20) {
  console.log("Прохладно");
} else {
  console.log("Тепло");
}

let userNumber = prompt("Введите число:");
if (userNumber % 2 === 0) {
  console.log("Чётное");
} else {
  console.log("Нечётное");
}

const PASSWORD = "javascript";
let inputPassword = prompt("Введите пароль:");
if (inputPassword === PASSWORD) {
  console.log("Добро пожаловать!");
} else {
  console.log("Неверный пароль!");
}

let score = 82;
if (score >= 90) {
  console.log("Отлично");
} else if (score >= 75) {
  console.log("Хорошо");
} else if (score >= 50) {
  console.log("Удовлетворительно");
} else {
  console.log("Нужно подтянуться");
}

let hour = 14;
if (hour >= 0 && hour <= 5) {
  console.log("Ночь");
} else if (hour >= 6 && hour <= 11) {
  console.log("Утро");
} else if (hour >= 12 && hour <= 17) {
  console.log("День");
} else if (hour >= 18 && hour <= 23) {
  console.log("Вечер");
} else {
  console.log("Некорректное время");
}

let hasTicket = true;
let age = 15;
if (age >= 16) {
  if (hasTicket === true) {
    console.log("Можно войти");
  } else {
    console.log("Купи билет");
  }
} else {
  console.log("Вход только с родителями");
}

let num1 = 10;
let num2 = 5;
let operator = "+";
switch (operator) {
  case "+":
    console.log(num1 + num2);
    break;
  case "-":
    console.log(num1 - num2);
    break;
  case "*":
    console.log(num1 * num2);
    break;
  case "/":
    console.log(num1 / num2);
    break;
  default:
    console.log("Неизвестная операция");
}

let day = 3;
switch (day) {
  case 1:
    console.log("Понедельник");
    break;
  case 2:
    console.log("Вторник");
    break;
  case 3:
    console.log("Среда");
    break;
  case 4:
    console.log("Четверг");
    break;
  case 5:
    console.log("Пятница");
    break;
  case 6:
    console.log("Суббота");
    break;
  case 7:
    console.log("Воскресенье");
    break;
  default:
    console.log("Такого дня нет");
}

let month = 12;
switch (month) {
  case 12:
  case 1:
  case 2:
    console.log("Зима");
    break;
  case 3:
  case 4:
  case 5:
    console.log("Весна");
    break;
  case 6:
  case 7:
  case 8:
    console.log("Лето");
    break;
  case 9:
  case 10:
  case 11:
    console.log("Осень");
    break;
  default:
    console.log("Неверный номер месяца");
}

let drink = "tea";
switch (drink) {
  case "tea":
    console.log("Вы выбрали чай");
    break;
  case "coffee":
    console.log("Вы выбрали кофе");
    break;
  case "juice":
    console.log("Вы выбрали сок");
    break;
  default:
    console.log("Такого напитка нет");
}

let isLoggedIn = true;
let role = "admin";
if (!isLoggedIn) {
  console.log("Войдите в систему");
} else if (role === "admin") {
  console.log("Добро пожаловать, админ");
} else {
  console.log("Здравствуйте, пользователь");
}

let total = 350;
let isVIP = true;
let finalPrice = total;
if (isVIP) {
  finalPrice = total * 0.8;
} else if (total >= 500) {
  finalPrice = total * 0.85;
} else if (total >= 200) {
  finalPrice = total * 0.9;
}
console.log(`Итоговая цена: ${finalPrice}`);

let num = Number(prompt("Введите число:"));
if (isNaN(num)) {
  console.log("Это не число!");
} else if (num > 0) {
  console.log("Положительное");
} else if (num < 0) {
  console.log("Отрицательное");
} else if (num === 0) {
  console.log("Ноль");
}

console.log("5" == 5);
console.log("5" === 5);
console.log("5" + 5);
console.log("5" - 5);

let ageInput = prompt("Введите возраст:");
let ageNumber = Number(ageInput);
if (ageNumber < 18) {
  console.log("Доступ запрещён");
} else {
  console.log("Проходи");
}

let userName = prompt("Введите имя:");
if (!userName) {
  console.log("Имя не введено");
} else {
  console.log(`Привет, ${userName}!`);
}

let isOnline = "false";
if (isOnline) {
  console.log("Пользователь в сети");
} else {
  console.log("Пользователь не в сети");
}

console.log("10" > 5);
console.log("10" < "2");
console.log("abc" > 5);
console.log(true == 1);
console.log(false == 0);
