#include <iostream>
using namespace std;

class tracker{
    private:
    int id;
    public:
    tracker(int i){
        id = i;
        cout<<"Constructor created"<<id<<endl;

    }
    ~tracker(){
        cout<<"Destructor destroyed"<<id<<endl;
    }
};

int main(){
    cout<<"__"<<endl;
    tracker t1(1);{
        tracker t2(2);
    }
    return 0;
}