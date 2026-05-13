#include <iostream>
using namespace std;

class vehicle{
    public:
    void honk(){
        cout<<"Beep"<<endl;
    }
};
class car : public vehicle{
    public:
    string model = "Mustang";
};
int main(){
    car mycar;
    mycar.honk();
    cout<<"car model: "<< mycar.model<<endl;
}