//SIMPLE PROGRAM CREATING A BASIC CLASS: Class Access Modifiers: public, private, protected
//Using only PUBLIC
#include <iostream>

class Box{
//A public member can be accessed from outside the class anywhere within the scope of the class object.
public:
    double length;
    double breadth;
    double height;

    //function prototype/declaration
    void setLength(double myLength);
    double getLength(void);
};

//function definition
void Box::setLength(double myLength){
    length = myLength;
}

double Box::getLength(void){
    return length;
}


int main()
{
    Box box1; // Declare box1 of type Box
    box1.setLength(10.0); //since "length" is public this is equivalent to box1.length = 10.0
    box1.breadth = 10.0;
    box1.height = 5.0;

    std::cout << "Using access function: Box length = " << box1.getLength() << std::endl;
    std::cout << "Using direct member access: Box length = " << box1.length << std::endl;

    return 0;
}
