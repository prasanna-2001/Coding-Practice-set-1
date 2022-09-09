import java.util.*;
class QuestionScope{
    int sum(int a, int b){
        return a+b;
    }
    static int multiply(int a, int b){
        return a*b;
    }
}
public class Test3{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        QuestionScope o = new QuestionScope();
        //Test3 o = new Test3(); method jis class me hai usi ke obk=ject se call hogi;
        System.out.println(o.sum(n1,n2));
      //  System.out.println(QuestionScope.sum(n1,n2));//non-static method sum(int,int) cannot be referenced from a static context so it will create erro thatswhy we use object forr the non static member
        System.out.println(QuestionScope.multiply(n1,n2)); // sttic ken litye obj ki bajay class ka name likhna';


    }
}