public class Main{
    public static void main(String args[]){
        // if(true){
        //     System.out.println("Welcome");
        // }
        // if(1==1){
        //     System.out.println("to");
        // }
        // if(0==0){
        //     System.out.println("nptel");
        // }

    //     int i = 10;
    //     int n = i++%5;
    //     int m = ++i%5;
    //     System.out.println(i+n+m);
    //     // System.out.println(i);
    //     // System.out.println(n);
    //     // System.out.println(m);

    char[] copyFrom={'j','a','n','j','a','v','a','n','p','t','e','l'};
    char[] copyTo= new char[9];
    System.arraycopy(copyFrom, 3, copyTo, 0, 9);
    System.out.println(new String(copyTo));
     }
}