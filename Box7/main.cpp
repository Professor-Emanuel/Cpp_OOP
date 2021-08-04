//SIMPLE PROGRAM CREATING A BASIC CLASS: COPY Constructor
#include <iostream>

class Box{
private:
    double *length;

public:
    double breadth;
    double height;

    //function prototype/declaration
    void setLength(double myLength);
    double getLength(void);

    //NORMAL constructor
    Box(double l, double b, double h);

    //COPY constructor
    Box(const Box &aBox);

    //Destructor
    ~Box();
};

//function definition
void Box::setLength(double myLength){
    *length = myLength;
}

double Box::getLength(void){
    return *length;
}

//NORMAL constructor
Box::Box(double l, double b, double h){
    std::cout<< "Normal constructor: ";

    //allocate memory to the pointer
    length = new double;
    *length = l;
    height = h;
    breadth = b;
}

//COPY constructor
Box::Box(const Box &aBox){
    std::cout<< "Copy constructor: ";

    //allocate memory to the pointer
    length = new double;
    *length = *aBox.length; //copy the value
    height = aBox.height;
    breadth = aBox.breadth;
}

//destructor
Box::~Box(){
    std::cout<< "Object deleted\n";
}

int main()
{
    //calls default constructor
    Box box1(1.0, 3.0, 4.0);
    std::cout << "Box1 = " << box1.getLength() << "\t" << box1.breadth << "\t" << box1.height << std::endl;

    Box box2 = box1;
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
