function greet(name) {
    console.log(`Привет, ${name}!`);
  }
  greet("Вася");
  
  const square = (n) => n * n;
  console.log(square(5));
  
  function sumArray(arr) {
    let sum = 0;
    for (let num of arr) {
      sum += num;
    }
    return sum;
  }
  console.log(sumArray([1, 2, 3]));
  
  const hello = () => "hi";
  console.log(hello());
  
  function doSomething(callback) {
    callback();
  }
  doSomething(() => console.log("Функция вызвана!"));
  
  function sortByLength(words) {
    return words.sort((a, b) => a.length - b.length);
  }
  console.log(sortByLength(["aaa", "b", "cc"]));
  
  function lastLetter(word) {
    return word[word.length - 1];
  }
  console.log(lastLetter("яблоко"));
  
  const user = {
    name: "Alex",
    showName() {
      console.log(this.name);
    },
    showNameArrow: () => {
      console.log(this.name);
    }
  };
  user.showName();
  user.showNameArrow();
  
  function makeCounter() {
    let count = 0;
    return function () {
      count++;
      return count;
    };
  }
  let counter = makeCounter();
  console.log(counter());
  console.log(counter());
  
  function createPiggyBank() {
    let total = 0;
    return function (amount) {
      total += amount;
      return total;
    };
  }
  let bank = createPiggyBank();
  console.log(bank(10));
  console.log(bank(5));
  
  function print(n) {
    if (n < 1) return;
    console.log(n);
    print(n - 1);
  }
  print(5);
  
  function makeCapital(str) {
    return str[0].toUpperCase() + str.slice(1);
  }
  console.log(makeCapital("привет"));
  
  const getEven = (arr) => arr.filter((num) => num % 2 === 0);
  console.log(getEven([1, 2, 3, 4]));
  