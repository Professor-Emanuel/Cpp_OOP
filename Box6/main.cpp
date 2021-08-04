//SIMPLE PROGRAM CREATING A BASIC CLASS: Class Constructor and Destructor
#include <iostream>

class Box{
private:
    double length;

public:
    double breadth;
    double height;

    //function prototype/declaration
    void setLength(double myLength);
    double getLength(void);

    //BASIC -default- constructor
    Box(){
        std::cout<< "Object created using the constructor: ";
        breadth = 4.0;
        length = 5.0;
        height = 10.0;
    }

    //PARAMETERIZED constructor
    Box(double l, double b, double h);

    //Destructor
    ~Box();
};

//function definition
void Box::setLength(double myLength){
    length = myLength;
}

double Box::getLength(void){
    return length;
}

Box::Box(double l, double b, double h){
    std::cout<< "Object created using the parameterized constructor: ";
    length = l;
    height = h;
    breadth = b;
}

// Above is equivalent to
/* Use Initialization Lists
Box::Box(double l, double b, double h):length(l), breadth(b), height(h){
    std::cout<< "Object created using the parameterized constructor: ";
}
*/

Box::~Box(){
    std::cout<< "Object deleted\n";
}

int main()
{
    //calls default constructor
    Box box1;
    std::cout << "Box1 = " << box1.getLength() << "\t" << box1.breadth << "\t" << box1.height << std::endl;

    Box box2(11.0, 12.0, 13.0);
    std::cout << "Box2 = " << box2.getLength() << "\t" << box2.breadth << "\t" << box2.height << std::endl;

    std::cout <<"Change values Box1:\n";
    box1.setLength(9.0); //since "length" is PRIVATE this is NOT equivalent to box1.length = 10.0
    box1.breadth = 8.0;
    box1.height = 7.0;

    std::cout << "Using access function: Box1 length = " << box1.getLength() << std::endl;
    std::cout << "Direct variable access: Box1 breadth = " << box1.breadth << std::endl;
    std::cout << "Direct variable access: Box1 height = " << box1.height << std::endl;
    return 0;
}
