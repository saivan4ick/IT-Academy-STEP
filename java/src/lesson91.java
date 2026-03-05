public class lesson91 {
    public static void main(String[] args) {
        Animal cat = new Cat()
    }
    int sum(int x, int y){
        return x + y;
    }
    int sum(int x, int y, int z){
        return x + y;
    }
    double sum(double x, double y){
        return x + y;
    }
}
class Animal{
    public String talk(){
        return "";
    }
}
class Cat extends Animal{
    @Override
    public String talk(){
        return "Meow";
    }
}
class Dog extends Animal{

}