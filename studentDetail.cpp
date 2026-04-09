#include <iostream>
using namespace std;

class Students{
    private:
    int rollNo;
    char name[30];
    float marks;

    public:
    void getDetails(){
        cin>>rollNo;
        cin >> name;
        cin>>marks;


    }
    void displayDetails(){
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;

    }
};
int main(){
    Students s1;
    s1.getDetails();
    cout<<"\n student details \n";
    s1.getDetails();
    return 0;
}