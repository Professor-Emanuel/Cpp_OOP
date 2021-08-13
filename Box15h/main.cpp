//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>
const int SIZE = 3;

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

    //OVERLOADING the function call operator ()
    Box operator()(int a, int c){
        Box myBox;

        //some random calculations to make an example
        myBox.l = a + 1;
        myBox.h = a - c + 20;
        myBox.b = c - 5;
        return myBox;
    }
};

// used for []-overloading exemplification
class safearray{
private:
    int A[SIZE] = {0, 1, 2};

    //OVERLOADING the subscripting operator []
    //The subscript operator [] is normally used to access array elements.
    //This operator can be overloaded to enhance the existing functionality of C++ arrays.
public:
    int &operator[](int i){
        if(i > SIZE){
            std::cout <<"Index out of bound\n";
            return A[0];
        }
        return A[i];
    }
};

int main(){
    Box box2(2, 5, 6);
    std::cout<<box2;
    Box box1 = box2(10, 10);
    std::cout<<box1;

    safearray A;
    std::cout<<"Value of A[0]: "<<A[0]<< std::endl;
    std::cout<<"Value of A[1]: "<<A[1]<< std::endl;
    std::cout<<"Value of A[2]: "<<A[2]<< std::endl;
    std::cout<<"Value of A[3]: "<<A[3]<< std::endl;
    std::cout<<"Value of A[4]: "<<A[4]<< std::endl;

    return 0;
}
