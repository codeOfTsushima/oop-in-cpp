#include <iostream>
using namespace std;

class calculator{
    private:
    int findMax(int a, int b){
        return (a>b)? a:b;
    }
public:
    void displayMax(int x,int y){
        int MaxVal = findMax(x, y);
        cout << "The maximum value is: "<<MaxVal<<endl;
    }
};

int main(){
    calculator calc;
    calc.displayMax(15,42);
    return 0;
}