//SIMPLE PROGRAM CREATING A BASIC CLASS: Class Access Modifiers: public, private, protected
//Using PUBLIC and PRIVATE
#include <iostream>

class Box{
//By default member will be PRIVATE
//double length;

//A public member can be accessed from outside the class anywhere within the scope of the class object.
public:
    double breadth;
    double height;

    //function prototype/declaration
    void setLength(double myLength);
    double getLength(void);

private:
    double length;
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
    box1.setLength(10.0); //since "length" is PRIVATE this is NOT equivalent to box1.length = 10.0
    box1.breadth = 10.0;
    box1.height = 5.0;

    std::cout << "Using access function: Box length = " << box1.getLength() << std::endl;
    //This will generate error because "length", is now PRIVATE
    //std::cout << "Using direct member access: Box length = " << box1.length << std::endl;

    //POSSIBLE, no error, because "breadth" and "height" are PUBLIC
    std::cout << "Box breadth = " << box1.breadth << std::endl;
    std::cout << "Box height = " << box1.height << std::endl;
    return 0;
}
