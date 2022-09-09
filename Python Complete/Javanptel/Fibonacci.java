import java.util.*;
public class Fibonacci{
    public static void main(String args[]){
        System.out.println("enter the number");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
          System.out.println(fib(n));
    }
static int fib(int n){
    if(n==1)
     return 0;
    else if(n==2)
     return 1;
    else
     return fib(n-1) + fib(n-2);
}
}
