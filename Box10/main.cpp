//SIMPLE PROGRAM CREATING A BASIC CLASS: this pointer
//Every object in C++ has access to its own address through an important pointer called "this" pointer.

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

    int compare(Box myBox){
        return this->Volume() > myBox.Volume();
    }
};

int main(){
    Box box1;
    std::cout << "Box1 volume (uses default parameters) :" << box1.Volume() << std::endl;
    Box box2(10.0, 20.0, 5.0);
    std::cout << "Box2 volume (given parameters) :" << box2.Volume() << std::endl;
    if(box1.compare(box2)){
        std::cout << "Box1 > Box2"<< std::endl;
    } else{
        std::cout << "Box2 > Box1"<< std::endl;
    }
    return 0;
}
