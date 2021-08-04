//SIMPLE PROGRAM CREATING A BASIC CLASS with a MEMBER FUNTION
#include <iostream>

class Box{
//A public member can be accessed from outside the class anywhere within the scope of the class object.
public:
    double length;
    double breadth;
    double height;

    //function prototype/declaration
    double getVolume(void);
    void setLength(double myLength);
    void setBreadth(double mybreadth);
    void setHeight(double myHeight);

    /* function declaration + definition
    double getVolume(void){
        return length * breadth * height;
    }
    */
};

//function definition
double Box::getVolume(void){
    return length * breadth * height;
}

void Box::setLength(double myLength){
    length = myLength;
}

void Box::setBreadth(double myBreadth){
    breadth = myBreadth;
}

void Box::setHeight(double myHeight){
    height = myHeight;
}


int main()
{
    Box box1; // Declare box1 of type Box
    double volume = 0.0;

    box1.setLength(10.0);
    box1.setBreadth(10.0);
    box1.setHeight(5.0);

    volume = box1.getVolume();
    std::cout << "Box1 volume = " << volume << std::endl;
    return 0;
}
