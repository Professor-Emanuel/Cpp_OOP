//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>

class Box{
private:
    int l, h, b;
public:
    Box(){l =0; h=0; b=0;}
    //next line is equivalent to Box(int lp, int hp, int bp):l{lp}, h{hp}, b{bp}{}
    Box(const int &lp,const int &hp, const int &bp):l{lp}, h{hp}, b{bp}{}

    //OVERLOADING the stream extraction operator >> and the stream insertion operator <<
    //IMPORTANT make the operator overloading function a friend of the class because it would be called without creating an object.
    friend std::ostream &operator<<(std::ostream &output, const Box &myBox){
        output<< "L: "<< myBox.l << std::endl << "H: "<< myBox.h << std::endl << "B: "<< myBox.b << std::endl ;
        return output;
    }

    friend std::istream &operator>>(std::istream &input, Box &myBox){
        input>> myBox.l >> myBox.h >> myBox.b;
        return input;
    }

    //OVERLOADING "=" operator
    //You can overload the assignment operator (=) just as you can other operators and
    //it can be used to create an object just like the copy constructor.
    Box operator=(const Box &myBox){
        // Check for self assignment
        if(this != &myBox){
            l = myBox.l;
            h = myBox.h;
            b = myBox.b;
        }
        return *this;
    }

    //OVERLOADING "=", other method
    void operator=(Box &myBox){
        l = myBox.l;
        h = myBox.h;
        b = myBox.b;
    }
};


int main(){
    Box box2(2, 5, 6);
    std::cout<<box2;
    Box box1 = box2;
    std::cout<<box1;

    return 0;
}
