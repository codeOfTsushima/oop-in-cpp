#include <iostream>
using namespace std;

int sod(int n){
    int sum = 0;
    if(n<0){
        n = -n;

    }
    while (n>0){
        sum += n%10;
        n/=10;

    }
    return sum;
}int main(){
    int num;
    cin>>num;
    cout<<sod(num)<<"\n";
    return 0 ;
}
