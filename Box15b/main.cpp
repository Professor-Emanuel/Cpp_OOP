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
};

//OVERLOADING the - operator; NOT as a MEMBER funtion of BOX
Box operator-(Box myBox1, Box myBox2){
        Box box;
        box.setL(myBox1.getL() - myBox2.getL());
        box.setH(myBox1.getH() - myBox2.getH());
        box.setB(myBox1.getB() - myBox2.getB());
        /* IF you wanna to always get positive values, do as:
        box.setL( (myBox1.getL() - myBox2.getL()) > 0 ? myBox1.getL() - myBox2.getL() : -(myBox1.getL() - myBox2.getL()) );

        FOR all
        */
        return box;
}

int main(){
    Box box1, box2, box3;

    box1.setL(2.0);
    box1.setH(5.0);
    box1.setB(1.0);

    box2.setL(4.0);
    box2.setH(1.0);
    box2.setB(5.0);

    box3 = box1 - box2;
    std::cout<< "Box1.l - Box2.l = "<< box3.getL()<< std::endl;
    std::cout<< "Box1.h - Box2.h = "<< box3.getH()<< std::endl;
    std::cout<< "Box1.b - Box2.b = "<< box3.getB()<< std::endl;

    return 0;
}
