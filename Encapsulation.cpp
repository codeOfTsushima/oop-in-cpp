#include <iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
//Encapsulation
public:

    void setName(string name){
        Name = name;

    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){   }
    Employee(string Name,string Company,int age){}

};

int main(){
    Employee employee1 = Employee("Parthip", "Amazon", 34);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Neymar", "Football", 34);
    employee2.IntroduceYourself();

    employee1.setAge(39);
    cout<<employee1.getName()<< " is "<<employee1.getAge()<<" years old"<<endl;
}