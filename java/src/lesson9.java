// Фигура КРУГ
class Shape {
    public void draw() {
        System.out.println("Рисуем фигуру");
    }
}
class Circle extends Shape {
    private double radius;
    public Circle(double radius) {
        this.radius = radius;
    }
    public void draw() {
        System.out.println("Рисуем круг с радиусом " + radius);
    }
    public double calculateArea() {
        return Math.PI * radius * radius;
    }
}
public class lesson9 {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);
        circle.draw();
        double area = circle.calculateArea();
        System.out.println("Площадь круга: " + area);
    }
}
// Музыкальный инструмент ГИТАРА
class MusicalInstrument {
    private String name;
    public MusicalInstrument(String name) {
        this.name = name;
    }

    public void play() {
        System.out.println(name + " играет музыку");
    }
}
class Guitar extends MusicalInstrument {
    private int numberOfStrings;
    public Guitar(String name, int numberOfStrings) {
        super(name);
        this.numberOfStrings = numberOfStrings;
    }
    public void strum() {
        System.out.println(name + " звучит после перебора");
    }
    public void tune() {
        System.out.println(name + " настроена с " + numberOfStrings + " струнами");
    }
}
public class lesson9 {
    public static void main(String[] args) {
        Guitar myGuitar = new Guitar("Акустическая гитара", 6);
        myGuitar.play();
        myGuitar.strum();
        myGuitar.tune();
    }
}
// ПРАКТИЧЕСКАЯ
class Pet {
    String name;
    double weight;
    String color;
    int age;
    public Pet(String name, double weight, String color, int age) {
        this.name = name;
        this.weight = weight;
        this.color = color;
        this.age = age;
    }
}
class Cat extends Pet {
    public Cat(String name, double weight, String color, int age) {
        super(name, weight, color, age);
    }
    public void sayMeow() {
        System.out.println(name + " говорит: Мяу!");
    }
    public void eat() {
        System.out.println(name + " ест рыбу");
    }
    public void sleep() {
        System.out.println(name + " спит");
    }
}
class Dog extends Pet {
    public Dog(String name, double weight, String color, int age) {
        super(name, weight, color, age);
    }
    public void sayWoof() {
        System.out.println(name + " говорит: Гав!");
    }
    public void eat() {
        System.out.println(name + " ест кость");
    }
    public void sleep() {
        System.out.println(name + " спит");
    }
    public void playWithBall() {
        System.out.println(name + " играет с мячом");
    }
    public void playWithStick() {
        System.out.println(name + " играет с палкой");
    }
}
public class lesson9 {
    public static void main(String[] args) {
        Cat myCat = new Cat("Вася", 5.0, "серый", 3);
        Dog myDog = new Dog("Барон", 10.5, "коричневый", 2);
        myCat.sayMeow();
        myCat.eat();
        myCat.sleep();
        myDog.sayWoof();
        myDog.eat();
        myDog.sleep();
        myDog.playWithBall();
        myDog.playWithStick();
    }
}

