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

//OVERLOADING the unary - operator; NOT as a MEMBER funtion of BOX
//METHOD 2
Box operator-(Box myBox){
        Box box;
        box.setL(-myBox.getL());
        box.setH(-myBox.getH());
        box.setB(-myBox.getB());
        /* IF you wanna to always get positive values, do as:
        box.setL( (myBox1.getL() - myBox2.getL()) > 0 ? myBox1.getL() - myBox2.getL() : -(myBox1.getL() - myBox2.getL()) );

        FOR all
        */
        return box;
}

int main(){
    Box box1, box2;

    box1.setL(2.0);
    box1.setH(5.0);
    box1.setB(1.0);

    box2 = -box1;
    std::cout<< "Box2.l = "<< box2.getL()<< std::endl;
    std::cout<< "Box2.h = "<< box2.getH()<< std::endl;
    std::cout<< "Box2.b = "<< box2.getB()<< std::endl;

    return 0;
}
