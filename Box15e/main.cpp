//SIMPLE PROGRAM CREATING A BASIC CLASS: Function & Operator Overloading
#include <iostream>

class Box{
private:
    int l, h, b;
public:
    Box(){
        l = 0;
        h = 0;
        b = 0;
    }
    Box(int lp, int hp, int bp){
        l = lp;
        h = hp;
        b = bp;
    }

    void displayBox(){
        std::cout<< "l = "<< l << std::endl;
        std::cout<< "h = "<< h << std::endl;
        std::cout<< "b = "<< b << std::endl;
    }

    //a constant member function
    int getVolume() const{
        return l * h * b;
    }

    //OVERLOADING "!" logic not operator
    Box operator!(){
        l = !l;
        h = !h;
        b = !b;
        return Box(l, h, b);
    }

    //OVELOADING the relational operator "<"
    bool operator<(Box &box2){
        return this->getVolume() < box2.getVolume();
    }

    //OVELOADING the relational operator ">"
    friend bool operator>(const Box &box1, const Box &box2);

    //OVELOADING the relational operator "=="
    bool operator==(const Box &box){
        return (this->l == box.l && this->h == box.h && this->b == box.b);
    }

    //OVELOADING the relational operator "!="
    bool operator!=(const Box &box){
        return (this->l != box.l || this->h != box.h || this->b != box.b);
    }

    //OVELOADING the relational operator "!="
    friend bool operator!=(const Box &box1, const Box &box2);
};

bool operator!=(Box &box1, Box &box2){
    return !(box1 == box2);
}

bool operator>(const Box &box1, Box &box2){
    return box1.getVolume() > box2.getVolume();
}

int main(){
    Box box1, box2(2, 5, 6);
    box1.displayBox();
    box2.displayBox();

    if(box1 < box2){
        std::cout<< "box1 < box2" << std::endl;
    }else{
        std::cout<< "box2 < box1" << std::endl;
    }

    if(box1 > box2){
        std::cout<< "box1 > box2" << std::endl;
    }else{
        std::cout<< "box2 > box1" << std::endl;
    }

    Box box3(2, 5, 6);

    if(box3 == box2){
        std::cout<< "box3 = box2" << std::endl;
    }

    if(box1 != box2){
        std::cout<< "box1 != box2" << std::endl;
    }


    !box1;
    !box2;
    box1.displayBox();
    box2.displayBox();
    if(box1 < box2){
        std::cout<< "box1 < box2" << std::endl;
    }else{
        std::cout<< "box2 < box1" << std::endl;
    }

    if(box1 > box2){
        std::cout<< "box1 > box2" << std::endl;
    }else{
        std::cout<< "box2 > box1" << std::endl;
    }

    return 0;
}
