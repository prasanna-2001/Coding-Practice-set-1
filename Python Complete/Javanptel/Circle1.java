import java.util.Scanner;
public class Circle1 extends Point{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        Point center = new Point();
        center.x=sc.nextDouble();
        center.y=sc.nextDouble();
        Point point = new Point();
        point.x=sc.nextDouble();
        point.y=sc.nextDouble();
        Circle1 c1 = new Circle1();
        c1.distance(center,point);
    }
}

class Point{
    double x;
    double y;
    void distance(Point p1, Point p2){
        double distance;
        distance = Math.sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
        System.out.print(distance);
    }

}
