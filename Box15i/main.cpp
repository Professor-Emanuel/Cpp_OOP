#include <iostream>
#include <vector>
//Consider this class
class Box{
private:
    static int i, j;

public:
        void f() const{std::cout<< i++ << std::endl;}
        void g() const{std::cout<< j++ << std::endl;}
};

//Static member definitions
int Box::i = 10;
int Box::j = 20;

//Container for Box Class
class BoxContainer{
private:
    std::vector<Box*> a;
public:
    void add(Box* myBox){
        a.push_back(myBox); //vector's standard method
    }
    friend class SmartPointer;
};

// implement smart pointer to access member of Box class.
class SmartPointer{
private:
    BoxContainer myBoxContainer;
    int index;
public:
    SmartPointer(BoxContainer& myBoxContr){
        myBoxContainer = myBoxContr;
        index = 0;
    }

    //return value indicates end of list
    bool operator++(){
        //prefix version
        if(index >= (int)myBoxContainer.a.size()){
                return false;
        }
        if(myBoxContainer.a[++index] == 0){
            return false;
        }
        return true;
    }

    bool operator++(int){
        //postfix version
        return operator++();
    }

    //OVERLOAD operator ->
    Box* operator->() const{
        if(!myBoxContainer.a[index]){
            std::cout<<"Zero Value ";
            return (Box*)0;
        }
        return myBoxContainer.a[index];
    }
};

int main()
{
    const int sz = 10;
    Box b[sz];
    BoxContainer bContainer;

    for(int i=0; i< sz; i++){
        bContainer.add(&b[i]);
    }

    SmartPointer sp(bContainer); //create an iterator
    do{
        sp->f();
    }while(sp++);
    do{
        sp->g();
    }while(sp++);

    return 0;
}
