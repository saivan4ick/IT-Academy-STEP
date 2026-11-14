function ask(question, defaultValue) {
    if (typeof prompt === "function") {
        const answer = prompt(question);
        return answer === null ? String(defaultValue) : answer;
    }
    return String(defaultValue);
}

{
    const age = Number(ask("Задание 1. Введите возраст:", 18));
    if (age >= 18) {
        console.log("1. Доступ разрешён");
    } else {
        console.log("1. Доступ запрещён");
    }
}

{
    let a = 10;
    let b = 7;

    if (a > b) {
        console.log("2. Число a больше:", a);
    } else if (b > a) {
        console.log("2. Число b больше:", b);
    } else {
        console.log("2. Они равны");
    }
}

{
    const t = 15;
    if (t < 0) {
        console.log("3. Мороз");
    } else if (t <= 20) {
        console.log("3. Прохладно");
    } else {
        console.log("3. Тепло");
    }
}

{
    const number = Number(ask("Задание 4. Введите число:", 8));
    if (number % 2 === 0) {
        console.log("4. Чётное");
    } else {
        console.log("4. Нечётное");
    }
}

{
    const PASSWORD = "javascript";
    const password = ask("Задание 5. Введите пароль:", "javascript");

    if (password === PASSWORD) {
        console.log("5. Добро пожаловать!");
    } else {
        console.log("5. Неверный пароль!");
    }
}

{
    const score = 85;
    if (score >= 90) {
        console.log("6. Отлично");
    } else if (score >= 75) {
        console.log("6. Хорошо");
    } else if (score >= 50) {
        console.log("6. Удовлетворительно");
    } else {
        console.log("6. Нужно подтянуться");
    }
}

{
    const hour = 14;
    if (hour >= 0 && hour <= 5) {
        console.log("7. Ночь");
    } else if (hour >= 6 && hour <= 11) {
        console.log("7. Утро");
    } else if (hour >= 12 && hour <= 17) {
        console.log("7. День");
    } else if (hour >= 18 && hour <= 23) {
        console.log("7. Вечер");
    } else {
        console.log("7. Некорректный час");
    }
}

{
    let hasTicket = true;
    let age = 15;

    if (age >= 16) {
        if (hasTicket === true) {
            console.log("8. Можно войти");
        } else {
            console.log("8. Купи билет");
        }
    } else {
        console.log("8. Вход только с родителями");
    }
}

{
    let a = 10;
    let b = 5;
    let operator = "+";

    if (operator === "+") {
        console.log("9. Результат:", a + b);
    } else if (operator === "-") {
        console.log("9. Результат:", a - b);
    } else if (operator === "*") {
        console.log("9. Результат:", a * b);
    } else if (operator === "/") {
        if (b !== 0) {
            console.log("9. Результат:", a / b);
        } else {
            console.log("9. На ноль делить нельзя");
        }
    } else {
        console.log("9. Неизвестная операция");
    }
}

{
    const day = 3;
    switch (day) {
        case 1: console.log("10. Понедельник"); break;
        case 2: console.log("10. Вторник"); break;
        case 3: console.log("10. Среда"); break;
        case 4: console.log("10. Четверг"); break;
        case 5: console.log("10. Пятница"); break;
        case 6: console.log("10. Суббота"); break;
        case 7: console.log("10. Воскресенье"); break;
        default: console.log("10. Некорректный номер дня");
    }
}

{
    const month = 12;
    switch (month) {
        case 12:
        case 1:
        case 2:
            console.log("11. Зима");
            break;
        case 3:
        case 4:
        case 5:
            console.log("11. Весна");
            break;
        case 6:
        case 7:
        case 8:
            console.log("11. Лето");
            break;
        case 9:
        case 10:
        case 11:
            console.log("11. Осень");
            break;
        default:
            console.log("11. Некорректный номер месяца");
    }
}

{
    const drink = "tea";
    switch (drink) {
        case "tea": console.log("12. Вы выбрали чай"); break;
        case "coffee": console.log("12. Вы выбрали кофе"); break;
        case "juice": console.log("12. Вы выбрали сок"); break;
        default: console.log("12. Такого напитка нет");
    }
}

{
    let isLoggedIn = true;
    let role = "admin";

    if (!isLoggedIn) {
        console.log("13. Войдите в систему");
    } else if (role === "admin") {
        console.log("13. Добро пожаловать, админ");
    } else {
        console.log("13. Здравствуйте, пользователь");
    }
}

{
    let total = 350;
    let isVIP = true;
    let discount = 0;

    if (isVIP) {
        discount = 20;
    } else if (total >= 500) {
        discount = 15;
    } else if (total >= 200) {
        discount = 10;
    }

    const finalPrice = total - (total * discount / 100);
    console.log(`14. Скидка: ${discount}%. Итоговая цена: ${finalPrice}`);
}

console.log("=== ЧАСТЬ 2. ПРИВЕДЕНИЕ ТИПОВ ===");

{
    const num = Number(ask("Задание 15. Введите число:", 12));

    if (isNaN(num)) {
        console.log("15. Это не число!");
    } else if (num > 0) {
        console.log("15. Положительное");
    } else if (num < 0) {
        console.log("15. Отрицательное");
    } else {
        console.log("15. Ноль");
    }
}

{
    console.log("16. Результаты:");
    console.log('"5" == 5:', "5" == 5);
    console.log('"5" === 5:', "5" === 5);
    console.log('"5" + 5:', "5" + 5);
    console.log('"5" - 5:', "5" - 5);
}

{
    const ageInput = ask("Задание 17. Введите возраст:", 20);
    const age = Number(ageInput);

    if (age < 18) {
        console.log("17. Доступ запрещён");
    } else {
        console.log("17. Проходи");
    }
}

{
    const name = ask("Задание 18. Введите имя:", "Вася");

    if (!name) {
        console.log("18. Имя не введено");
    } else {
        console.log(`18. Привет, ${name}!`);
    }
}

{
    let isOnline = "false";

    if (isOnline) {
        console.log("19. Пользователь в сети");
    } else {
        console.log("19. Пользователь не в сети");
    }
}

{
    console.log('20. "10" > 5:', "10" > 5);
    console.log('"10" < "2":', "10" < "2");
    console.log('"abc" > 5:', "abc" > 5);
    console.log("true == 1:", true == 1);
    console.log("false == 0:", false == 0);
}