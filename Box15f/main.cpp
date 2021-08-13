//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>

class Box{
private:
    int l, h, b;
public:
    Box(){l =0; h=0; b=0;}
    //next line is equivalent to Box(int lp, int hp, int bp):l{lp}, h{hp}, b{bp}{}
    Box(const int &lp,const int &hp, const int &bp):l{lp}, h{hp}, b{bp}{}

    //OVELOADING the relational operator "=="
    friend bool operator==(const Box &box1, const Box &box2);
    //OVELOADING the relational operator "!="
    friend bool operator!=(const Box &box1, const Box &box2);

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

    //OVERLOADING ++ & -- operators
    Box operator++(){
        l++;
        h++;
        b++;
        return Box(l, h, b);
    }

    Box operator--(){
        l--;
        h--;
        b--;
        return Box(l, h, b);
    }

    //OVERLOADING "=" operator
    //You can overload the assignment operator (=) just as you can other operators and
    //it can be used to create an object just like the copy constructor.
};

bool operator==(const Box &box1, const Box &box2){
    return (box1.l == box2.l && box1.h == box2.h && box1.b == box2.b);
}

bool operator!=(const Box &box1, const Box &box2){
    return !(box1 == box2);
}

int main(){
    Box box2(2, 5, 6);
    std::cout<<box2;
    Box box3(2, 5, 6);

    if(box3 == box2){
        std::cout<< "box3 = box2" << std::endl;
    }

    Box box1(10, 11, 12);
    if(box1 != box2){
        std::cout<< "box1 != box2" << std::endl;
    }

    Box box4;
    std::cout<<box4;
    std::cin>>box4;
    std::cout<<box4;

    ++box4; //box4++ not going to work
    ++box4; //increment another time
    std::cout<<box4;

    --box4; //box4-- not going to work
    std::cout<<box4;

    //HOW does this work without overloading "=" operator?
    //Since there is no user defined assignment operator in the above program, compiler creates a default assignment operator
    box4 = box1 = box2;
    std::cout<<box4;
    return 0;
}
