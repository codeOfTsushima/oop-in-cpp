#include <iostream>
using namespace std;

class Box{
    double width;
    public:
    inline void setWidth(double w){width = w;}

    friend void printWidth(Box b);

};

void printWidth(Box b){
    cout << "Width of the box is: "<<b.width<<endl;

}
int main(){
    Box myBox;
    myBox.setWidth(10.5);
    printWidth(myBox);
    return 0 ;
}
