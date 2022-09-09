import java.util.*;
public class Que71{
    public static void main(String args[]){
        Scanner inr = new Scanner(System.in);
        int n, sum=0;
        for(int i=0; i<3; i++){
            n = inr.nextInt();
            sum=sum+n;
        }
        System.out.println(sum);
    }
}