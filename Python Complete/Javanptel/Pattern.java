    import java.util.*;

    public class Pattern{
            public void print_pattern(int a, int x){
                int b=a;
                int z=x;
                if(z==0){
                    for(int i=0; i<b; i++){
                        for(int j=0;j<b-i;j++){
                            System.out.print("* ");
                            
                        }
                        System.out.println("\n");

                    }
                }
                else{
                    for(int i=0; i<b; i++){
                        for(int j=0;j<i;j++){
                            System.out.print("* ");
                            
                        }
                        System.out.println("\n");

                    }
                    
                }
            }
            public static void main(String args[]){
                System.out.println("Welcome tp printing press");
                int y=0;
                do{
                    System.out.println("Enter the number of rows");
                    Scanner sc= new Scanner(System.in);
                    int n = sc.nextInt();
                    System.out.println("enter \n 1.Normal \n 0.Reverse");
                    int x = sc.nextInt();
                    Pattern p = new Pattern();
                    p.print_pattern(n,x);
                    System.out.println("Press 0 if you want to continue else press any other key");
                    y = sc.nextInt();
                }while(y==0);
                
            }
       
    }


