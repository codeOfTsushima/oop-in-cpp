#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point(int x1, int y1){
        x= x1;
        y= y1;
    }

    void display(){
        cout<<"Point coordinates: ("<<x<<")"<<y <<endl;
    }
};

int main(){
    Point p1(10,15);
    p1.display();
    return 0 ;
}