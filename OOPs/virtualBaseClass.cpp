#include <iostream>
using namespace std;
class Grandparent{
    public:
    void print(){
        cout<<"Grandparent class"<<endl;
    }
};
        class Parent1 : virtual public Grandparent{};
        class parent2 : virtual public Grandparent{};
        
        class child : public Parent1, public parent2{};

        int main(){
            child c;
            c.print();
            return 0;
        }
    
