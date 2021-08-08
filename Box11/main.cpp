//SIMPLE PROGRAM CREATING A BASIC CLASS: POINTER to Classes

#include <iostream>

class Box{
private:
    double l, h, b;
public:
    //Constructor
    Box(double myL = 2.0, double myH = 10.0, double myB = 20.0){
        std::cout<<"Contructor called!"<< std::endl;
        l = myL;
        h = myH;
        b = myB;
    }

    double Volume(){
        return l * h * b;
    }
};

int main(){
    Box box1;
    Box box2(10.0, 20.0, 5.0);
    Box *box3; //pointer to box class

    box3 = &box1;
    std::cout << "Box1 volume (uses default parameters) :" << box3->Volume() << std::endl;

    box3 = &box2;
    std::cout << "Box2 volume (given parameters) :" << box3->Volume() << std::endl;

    return 0;
}
