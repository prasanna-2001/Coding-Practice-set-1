class A{
    int i,j;

    void showij(){
        System.out.println("i and j: " + i + ", " + j);
    }
}
//subclass which extends a
class B extends A{
    int k;
    void showk(){
        System.out.println("k = " + k);
    }
    void sum(){
        System.out.println("i+j+k: " +(i+j+k));
    }
}
public class Inheritence1{
    public static void main(String args[]){
        A superOb = new A();
        B subOb = new B();
        superOb.i = 10;
        superOb.j = 20;
        System.out.println("Content of the super ckass are :");
        superOb.showij();
        System.out.println();

      // the subclass has access to alll the [ublic menber of the super class
      subOb.i=7;
      subOb.j=8;
      subOb.k=9;
      System.out.println("the contentc of the sub ckass are:");
      subOb.showij();
      subOb.showk();
      System.out.println();
      System.out.println("the sum is");
      subOb.sum();
       
    }
}