//SIMPLE PROGRAM CREATING A BASIC CLASS: STATIC Members of a Classes & Static Function Members

#include <iostream>

class Box{
private:
    double l, h, b;

public:
    static int objectCount;

    //Constructor
    Box(double myL = 2.0, double myH = 10.0, double myB = 20.0){
        std::cout<<"Contructor called!"<< std::endl;
        l = myL;
        h = myH;
        b = myB;

        //INCREASE every time an object is created
        objectCount++;
    }

    double Volume(){
        return l * h * b;
    }

    static int getCount(){
        return objectCount;
    }
};

//INITIALIZE static member of BOX
int Box::objectCount = 0;

int main(){

    // Print total number of objects before creating object.
    std::cout<< "Initial number of objects: " << Box::getCount() <<std::endl;
    Box box1;
    Box box2(10.0, 20.0, 5.0);
    Box *box3; //pointer to box class

    box3 = &box1;
    std::cout << "Box1 volume (uses default parameters) :" << box3->Volume() << std::endl;

    box3 = &box2;
    std::cout << "Box2 volume (given parameters) :" << box3->Volume() << std::endl;

    //TOTAL number of objects created
    std::cout<< "TOTAL objects: "<< Box::objectCount << std::endl;

    // Print total number of objects after creating object.
    std::cout<< "Final number of objects: " << Box::getCount() <<std::endl;

    return 0;
}
