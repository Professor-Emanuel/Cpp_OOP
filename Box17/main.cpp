//SIMPLE PROGRAM CREATING A BASIC CLASS: Data Abstraction & Data Encapsulation
/*
Any C++ program where you implement a class with public and private members is an example of data encapsulation and data abstraction.
*/
#include <iostream>

// base/parent class
class Box{
private:
    int l, h, b;
public:
    Box(){l=0; h=0; b=0;}
    Box(int myL, int myH, int myB){
        l = myL;
        h = myH;
        b = myB;
    }

    friend std::ostream &operator<<(std::ostream &output, const Box myBox){
        output<<"L: "<< myBox.l << std::endl<<"H: "<< myBox.h << std::endl<<"B: "<< myBox.b << std::endl;
        return output;
    }
    int getL(){return l;}
    int getH(){return h;}
    int getB(){return b;}

    virtual int volume(){
        std::cout<< "Parent class volume: "<< std::endl;
        return 0;
    }
};

// derived/child class
class Cube:public Box{
public:
    Cube(int a = 0):Box(a, a, a){}

    int volume(){
        std::cout<< "Cube class volume: ";
        return getL() * getH() * getB();
    }

    int area(){
        std::cout<< "Cube class are: ";
        return 6 * getL() * getH();
    }
};

// derived/child class
class Parallelepiped: public Box{
public:
    Parallelepiped(int a = 0, int b = 0, int  c = 0):Box(a, b, c){}

    int volume(){
        std::cout<< "Parallelepiped class volume: ";
        return getL() * getH() * getB();
    }

    int area(){
        std::cout<< "Cube class are: ";
        return 4 * getL() * getH();
    }
};

int main()
{
    Box *box;
    Cube cube(2);
    Parallelepiped par(1, 2, 10);

    box = &cube;
    std::cout<<box->volume() <<std::endl;

    box = &par;
    std::cout<<box->volume() <<std::endl;

    return 0;
}
