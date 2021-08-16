//SIMPLE PROGRAM CREATING A BASIC CLASS: Interfaces in C++ (Abstract Classes)
/*
Any C++ program where you implement a class with public and private members is an example of data encapsulation and data abstraction.
A class is made abstract by declaring at least one of its functions as pure virtual function.
Abstract classes cannot be used to instantiate objects and serves only as an interface.
*/
#include <iostream>

// base/parent class - abstract class!
class Box{
private:
    int l, h, b;
public:
    Box(){l=0; h=0; b=0;}

    void setL(int myL){l = myL;}
    void setH(int myH){h = myH;}
    void setB(int myB){b = myB;}

    int getL(){return l;}
    int getH(){return h;}
    int getB(){return b;}

    // pure virtual function providing interface framework
    virtual int volume() = 0;
};

// derived/child class
class Cube:public Box{
public:
    int volume(){
        std::cout<< "Cube class volume: ";
        return getL() * getH() * getB();
    }
};

// derived/child class
class Parallelepiped: public Box{
public:
    int volume(){
        std::cout<< "Parallelepiped class volume: ";
        return getL() * getH() * getB();
    }
};

int main()
{
    Cube cube;
    cube.setL(3);
    cube.setH(3);
    cube.setB(3);

    Parallelepiped par;
    par.setL(5);
    par.setH(2);
    par.setB(10);

    std::cout<< cube.volume() <<std::endl;
    std::cout<< par.volume() <<std::endl;
    return 0;
}
