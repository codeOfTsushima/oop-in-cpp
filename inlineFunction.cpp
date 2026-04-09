#include <iostream>
using namespace std;

inline int getsum(int a, int b){
    return a+b;

}
int main(){
    int result = getsum(5,10);
    cout << "Sum: "<<result<<endl;
    return 0;
}