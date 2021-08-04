//SIMPLE PROGRAM CREATING A BASIC CLASS
#include <iostream>

class Box{
//A public member can be accessed from outside the class anywhere within the scope of the class object.
public:
    double length;
    double breadth;
    double height;
};

int main()
{
    //Both of the objects box1 and box2 will have their own copy of data members.
    Box box1; // Declare box1 of type Box
    Box box2; // Declare box2 of type Box
    double volume = 0.0;

    box1.length = 10.0;
    box1.breadth = 10.0;
    box1.height = 5.0;

    box2.length = 10.0;
    box2.breadth = 10.0;
    box2.height = 12.0;

    volume = box1.length * box1.breadth * box1.height;
    std::cout << "Box1 volume = " << volume << std::endl;

    volume = box2.length * box2.breadth * box2.height;
    std::cout << "Box2 volume = " << volume << std::endl;

    return 0;
}
