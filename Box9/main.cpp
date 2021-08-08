//SIMPLE PROGRAM CREATING A BASIC CLASS: FRIEND functions + INLINE functions
/*
A friend function of a class is defined outside that class' scope
but it has the right to access all private and protected members
of the class. Even though the prototypes for friend functions
appear in the class definition, friends are not member functions.
*/
#include <iostream>

class Box{
private:
    double l, b, h;

public:
    void setL(double myL);
    friend void printL(Box aBox);
    double getL(){return l;}
};

// Member function definition
void Box::setL(double myL){
        l = myL;
}

// Note: printH() is not a member function of any class.
// So you just call it using its name, NOT as box1.printL(box1)
void printL(Box aBox)
{
    /* Because printH() is a friend of Box, it can
   directly access any member of this class */
   std::cout<< aBox.l<<";";
}

inline int Max(int x, int y){
    return (x > y) ? x : y;
}

int main()
{
    Box box1;
    box1.setL(15.0);
    std::cout<<"Box1 using getL function, L: "<< box1.getL() <<";" << std::endl;
    std::cout<<"Box1 using printL function, L: ";
    printL(box1);
    std::cout << std::endl;
    std::cout << "Max(10, 50): " << Max(10, 50) << std::endl;
    std::cout << "Max(-100, 50): " << Max(-100, 50) << std::endl;
    std::cout << "Max(1000, 50): " << Max(1000, 50) << std::endl;
    return 0;
}
