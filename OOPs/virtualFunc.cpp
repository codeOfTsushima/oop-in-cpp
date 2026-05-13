#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void makeSound(){
        cout<< "Some generic animal sound"<<endl;
    }
};

class cat : public Animal{
    public:
    void makeSound() override{
        cout<< "Meow!"<<endl;
    }
};
int main(){
    Animal *animalPtr;
    cat myCat;

    animalPtr = &myCat;
    animalPtr->makeSound();
    return 0;
}