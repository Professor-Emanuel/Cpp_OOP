//SIMPLE PROGRAM CREATING A BASIC CLASS: Base & Derived Classes

#include <iostream>

//BASE class
class Box{
//if these are private, than getVolume() will generate error, because you try to access these members directly
//instead, you would need getL(), getH() and getB() to return l, h, b to calculate the volume
protected:
    double l, h, b;

public:
    void setL(double myL){l = myL;}
    void setH(double myH){h = myH;}
    void setB(double myB){b = myB;}

};

//DERIVED class: If the access-specifier is not used, then it is private by default.
class Cube: public Box{
public:
    double getVolume(){
        return (l * h * b);
    }
};

int main(){

    Cube cube1;
    cube1.setL(10.0);
    cube1.setH(6.0);
    cube1.setB(2.0);

    //PRINT cube VOLUME
    std::cout<< "Cube1 volume: " << cube1.getVolume() <<std::endl;

    return 0;
}
