import java.util.*;
interface Number {
    int findsqr(int i);
}
class A implements Number {
    int i , square;
    public int findsqr(int i){
        square = i*i;
        return square;
    }
    
}
 public class Que5_1{
     public static void main(String args[]){
         A a = new A();
         Scanner sc = new Scanner(System.in);
         int i = sc.nextInt();
         System.out.println(a.findsqr(i));
     }
 }