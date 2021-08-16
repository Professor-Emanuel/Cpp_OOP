//SIMPLE PROGRAM CREATING A BASIC CLASS: Polymorphism
#include <iostream>

// base/parent class
class Box{
protected:
    int l, h, b;
public:
    Box(){l=0; h=0; b=0;}
    Box(int myL, int myH, int myB){
        l = myL;
        h = myH;
        b = myB;
    }
/*
    friend std::ostream &operator<<(std::ostream &output, const Box myBox){
        output<<"L: "<< myBox.l << std::endl<<"H: "<< myBox.h << std::endl<<"B: "<< myBox.b << std::endl;
        return output;
    }
*/
    //using virtual will make the compiler choose the
    //correct volume() function
    virtual int volume(){
        std::cout<< "Parent class volume: "<< std::endl;
        return 0;
    }

    //pure virtual function
    virtual int area() = 0;
    //The = 0 tells the compiler that the function has no body
};

// derived/child class
class Cube:public Box{
public:
    Cube(int a = 0):Box(a, a, a){}

    int volume(){
        std::cout<< "Cube class volume: ";
        return l * l * l;
    }

    int area(){
        std::cout<< "Cube class are: ";
        return 6 * l * l;
    }
};

// derived/child class
class Parallelepiped: public Box{
public:
    Parallelepiped(int a = 0, int b = 0, int  c = 0):Box(a, b, c){}

    int volume(){
        std::cout<< "Parallelepiped class volume: ";
        return l * h * b;
    }

    int area(){
        std::cout<< "Cube class are: ";
        return 4 * l * h;
    }
};

int main()
{
    Box *box;
    Cube cube(10);
    Parallelepiped par(5, 2, 10);

    //store the address of cube in box;
    box = &cube;

    //call cube volume
    std::cout<<box->volume() <<std::endl;
    std::cout<<box->area() <<std::endl;

    //store the address of par in box;
    box = &par;

    //call par volume
    std::cout<<box->volume() <<std::endl;
    std::cout<<box->area() <<std::endl;
    /*
    OUTPUT:
    Parent class volume:
    Parent class volume:
    */
    /*
    The reason for the incorrect output is that the call of the function volume()
    is being set once by the compiler as the version defined in the base class.
    This is called static resolution of the function call, or static linkage -
    the function call is fixed before the program is executed. This is also sometimes
    called early binding because the volume() function is set during the compilation of the program.

    But now, let's make a slight modification in our program and precede the declaration
    of volume() in the Box class with the keyword virtual

    After this slight modification, when the previous example code is compiled and executed,
    it produces the following result −

    Cube class volume:
    Parallelepiped class volume:
    */

    /*
    This time, the compiler looks at the contents of the pointer
    instead of it's type. Hence, since addresses of objects
    of cube and par classes are stored in *box the respective
    volume() function is called.

    As you can see, each of the child classes has a separate
    implementation for the function volume(). This is how
    polymorphism is generally used. You have different
    classes with a function of the same name, and even the
    same parameters, but with different implementations.
    */
    return 0;
}
