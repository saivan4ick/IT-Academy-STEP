/* пример без логических операторов
let age = 20;
let hasTicket = true;
if (age >= 18) {
  if (hisTicket) {
    console.log("Можно выйти");
  } else {
    console.log("Нужен билет");
  }
} else {
  console.log("Недостаточно лет");
} */

let age = 20;
let hasTicket = true;
if (age < 18) {
  console.log("Недостаточно лет");
} else if (age >= 18 && hasTicket) {
  console.log("Можно выйти");
} else {
  console.log("Нужен билет");
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
  default:
    console.log("Другой день");
}

let color = "red";
switch (color) {
  case "red":
    console.log("красный");
  case "green":
    console.log("зеленый");
  default:
    console.log("Другой");
}

let day = "Saturday";
switch (day) {
  case "Saturday":
    case "Sunday":
      console.log("Выходной");
      break;
      default:
        console.log("Будний день");
}

let role = "admin";
switch (role) {
  case "admin":
    console.log("Администратор");
    break;
  case "user":
    console.log("Пользователь");
    break;
  case "guest":
    console.log("Гость");
    break;
  default:
    console.log("Нет доступа");
}

let age = 18;
let message = age => 18 ? "Взрослый" : "Несовершенолетний";
console.log(message);

let isOnline = true;
let status = isOnline ? "В сети" : "Не в сети";
console.log(status);

let isReady = true;
let status2 = isReady ? "Готов" : "Не готов";
console.log(status2);