import java.util.Scanner;
class Shape{
    double length, breadth;
    Shape(double l,double b){
        length=l;
        breadth=b;
    }
    Shape(double len){
        length=breadth=len;
    }
    double calculate(){
        return length*breadth;
    }
}
public class Test1 extends Shape{
    double height;
    Test1(double length, double h){
        super(length);
        height=h;
    }
    Test1(double length, double breadth, double h){
        super(length, breadth);
        height=h;
    }
    double calculate(){
        return length*breadth*height;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        double l = sc.nextDouble();
        double b = sc.nextDouble();
        double h = sc.nextDouble();
        Test1 myShape1 = new Test1(l,b);
        Test1 myShape2 = new Test1(l,b,h);
        double volume1;
        double volume2;
        volume1 = myShape1.calculate();
        volume2 = myShape2.calculate();
        System.out.println(volume1); 
        System.out.println(volume2); 
    }
}