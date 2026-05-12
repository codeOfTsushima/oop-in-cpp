#include <iostream>
using namespace std;

int sum( int a, int b = 5){
    return a + b;

}
int main(){
    cout<<"Sum with one argument"<<sum(10)<<endl;
    cout<<"Sum with one argument"<<sum(10, 20)<<endl;//function is overriden
    return 0;
}