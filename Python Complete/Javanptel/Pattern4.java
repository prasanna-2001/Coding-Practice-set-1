import java.util.*;
public class Pattern4{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int ul = 0;
        int ll = 0;
    if(l%2 != 0){
        ul=(l/2)+1; // haldf of line
        ll=l-ul;

        //code for upper half
        for(int i=1; i<=ul; i++){
            for(int s=1; s<=(ul-1); s++){
                System.out.println(" "); //print space
            }
            for(int j=1; j<=i; j++){
                System.out.println("* "); //prin ting stars
            }
            System.out.println();
        }

        //code for lower part
        int llc=ll;
        for(int i=1; i<=ll; i++){
            for(int s=llc; s<ll; s++){
                System.out.println(" "); //space printing
            }
            for(int j=1; j-1<=ll-i; j++){
                System.out.println(" *"); //star prinnting
            }
            llc--;
            System.out.println();
        }
    }
    else{
        System.out.println("Enter a valid number");
    }
    }
}