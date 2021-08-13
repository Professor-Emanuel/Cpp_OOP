//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>

class Box{
private:
    double l, h, b;

public:
    void setL(double myL){l = myL;}
    void setH(double myH){h = myH;}
    void setB(double myB){b = myB;}
    double getL(){return l;}
    double getH(){return h;}
    double getB(){return b;}

    Box(){
        //l = 0;
        //h = 0;
        //b = 0;
    }

    Box(double myL, double myH, double myB){
        l = myL;
        h = myH;
        b = myB;
    }

    //OVERLOADING the unary - operator; as a MEMBER funtion of BOX
    //METHOD 1 - using a constructor
    Box operator-(){
        l = -l;
        h = -h;
        b = -b;
        return Box(l, h, b);
    }
};

int main(){
    Box box1, box2;
    Box box3(10.0, 20.0, 30.0);

    //apply - operator, from method 1
    -box3;
    std::cout<< "Box3.l = "<< box3.getL()<< std::endl;
    std::cout<< "Box3.h = "<< box3.getH()<< std::endl;
    std::cout<< "Box3.b = "<< box3.getB()<< std::endl;

    box1.setL(2.0);
    box1.setH(5.0);
    box1.setB(1.0);

    //apply - operator, from method 1
    box2 = -box1;
    std::cout<< "Box2.l = "<< box2.getL()<< std::endl;
    std::cout<< "Box2.h = "<< box2.getH()<< std::endl;
    std::cout<< "Box2.b = "<< box2.getB()<< std::endl;

    return 0;
}
