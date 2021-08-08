//SIMPLE PROGRAM CREATING A BASIC CLASS: COPY Constructor
#include <iostream>

class Box{
private:
    double l, b, h;

public:
    //NORMAL constructor
    Box(double lx, double bx, double hx){
        std::cout<< "Normal constructor: ";
        l = lx;
        b = bx;
        h = hx;
    }

    //COPY constructor
    Box(const Box &aBox){
        std::cout<< "Copy constructor: ";
        l = aBox.l;
        b = aBox.b;
        h = aBox.h;
    }

    //Destructor
    ~Box(){std::cout<< "Object deleted\n";}

    double getL(){return l;}

    double getB(){return b;}

    double getH(){return h;}
};

int main()
{
    Box box1(20.0, 30.0, 10.0);
    std::cout<<"Box1: "<< box1.getL() <<"; "<< box1.getB() <<"; "<< box1.getH() <<". "<< std::endl;
    Box box2 = box1;
    std::cout<<"Box2: "<< box2.getL() <<"; "<< box2.getB() <<"; "<< box2.getH() <<". "<< std::endl;
    return 0;
}
