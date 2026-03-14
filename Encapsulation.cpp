#include <iostream>
using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
//Encapsulation
public:

    void setName(string name){ //setter
        Name = name;

    }
    string getName(){ //getter
        return Name;
    }
    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){  
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
     }
    Employee(string Name,string Company,int age){
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

};

int main(){
    Employee employee1 = Employee("Parthip", "Amazon", 34);
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Neymar", "Football", 34);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout<<employee1.getName()<< " is "<<employee1.getAge()<<" years old"<<endl;
}