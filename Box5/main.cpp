//SIMPLE PROGRAM CREATING A BASIC CLASS: Class Access Modifiers: public, private, protected
//Using PUBLIC and PROTECTED
#include <iostream>

//PARENT class
class Box{
public:
    double breadth;

    //function prototype/declaration
    void setLength(double myLength);
    double getLength(void);

protected:
    double length;
    double height;
};

//CHILD class - DERIVED class
//you have to specify public, in front of BOX, otherwise "breadth" & getLength() can not be accessed by a child object
class BlackBox:public Box{
public:
    void setBHeight(double myHeight);
    double getBHeight(void);

    //initialize with constructor or use the setLength() & getLength() from public Box, in function main()
    BlackBox(){
        length = 10.0; //allowed: can access protected base members from derived class
    }
};


//function definition
void Box::setLength(double myLength){
    length = myLength;
}

double Box::getLength(void){
    return length;
}

void BlackBox::setBHeight(double myHeight){
    height = myHeight;
}

double BlackBox::getBHeight(void){
    return height;
}

int main()
{
    Box box1; // Declare box1 of type Box
    box1.setLength(10.0); //since "length" is PROTECTED this is NOT equivalent to box1.length = 10.0;
    box1.breadth = 10.0;
    //ERROR, since "height" is protected now
    //box1.height = 5.0;

    BlackBox box2;
    box2.breadth = 3.0;
    box2.setBHeight(10.0);
    //Error, PROTECTED
    //box2.length = 10.0;
    //box2.height = 10.0;

    std::cout << "Using access function: Box length = " << box1.getLength() << std::endl;
    std::cout << "Box breadth = " << box1.breadth << std::endl;
    std::cout << "BlackBox dimensions = " << box2.getLength() << "\t" <<box2.breadth << "\t" << box2.getBHeight() << std::endl;

    //Use setLength() & getLength() from public Box, for the child box2
    box2.setLength(20.0);
    std::cout << "BlackBox dimensions = " << box2.getLength() << "\t" <<box2.breadth << "\t" << box2.getBHeight() << std::endl;

    return 0;
}
