//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>

class printData{
public:
    //FUNCTION OVERLOADING
    void print(int i){
        std::cout<< "Printing integer: "<< i<< std::endl;
    }
    void print(double i){
        std::cout<< "Printing float: "<< i<< std::endl;
    }
    void print(char i){
        std::cout<< "Printing character: "<< i<< std::endl;
    }
};

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

    //OVERLOADING the + operator
    Box operator+(const Box &myBox){
        Box box;
        box.l = this->l + myBox.l;
        box.h = this->h + myBox.h;
        box.b = this->b + myBox.b;

        /* NOT equivalent to:
        box.l = box.l + myBox.l;
        box.h = box.h + myBox.h;
        box.b = box.b + myBox.b;

        YOU have to use "this" pointer
        */
        return box;
    }

};

int main(){

    printData pD;
    pD.print(50);
    pD.print(50.501);
    pD.print('c');

    Box box1, box2, box3;

    box1.setL(2.0);
    box1.setH(5.0);
    box1.setB(1.0);

    box2.setL(4.0);
    box2.setH(1.0);
    box2.setB(5.0);

    box3 = box1 + box2;
    std::cout<< "Box1.l + Box2.l = "<< box3.getL()<< std::endl;
    std::cout<< "Box1.h + Box2.h = "<< box3.getH()<< std::endl;
    std::cout<< "Box1.b + Box2.b = "<< box3.getB()<< std::endl;

    return 0;
}
