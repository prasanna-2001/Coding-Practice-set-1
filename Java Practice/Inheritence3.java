class Box{
    double width;
    double height;
    double depth;

// default settimngd by the conxtructor
    Box(){
        width = 0.0;
        height = 0.0;
        depth = 0.0;
    }

Box(double w, double h, double d){
    width = w;
    height = h;
    depth = d;
}
double volume(){
    return(width*height*depth);
}

}

//no=w we want to include the weight also so we extend the classs box by boxweight

class BoxWeight extends Box{
    double weight; //weigyht of the box
    // deg]fault constructor for the class box
    BoxWeight(){
        super(); //call the default cobnstructor of superclass
        weight=0.0;
    }

    //constructor of the bxweight

    BoxWeight(double w, double h, double d, double m){
        super(w,h,d); //call the overloaded constructior of ssuper class
        weight = m;
    }
}

class Inheritence3{
    public static void main(String arg[]){
        Box mybox1 = new Box(10,20,15);
        BoxWeight mybox2 = new BoxWeight(2,3,4,0.786);
        double vol;
        vol = mybox1.volume();
        System.out.println("the volume of box 1 is :"+ vol);
        System.out.println();


        vol = mybox2.volume();
        System.out.println("the volume of box2 is :"+ vol);
        System.out.println("the weighr of box2 is :" + mybox2.weight + "kg");
    }
    
}