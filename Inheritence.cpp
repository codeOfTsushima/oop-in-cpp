#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void askforpromotion() = 0;
};

class Employee : public AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) { Name = name; }
    string getName() { return Name; }
    void setCompany(string company) { Company = company; }
    string getCompany() { return Company; }
    void setAge(int age) { if(age >= 18) Age = age; }
    int getAge() { return Age; }

    void IntroduceYourself() {
        cout << "Name - " << Name << ", Company - " << Company << ", Age - " << Age << endl;
    }

    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void askforpromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry no promotion for you." << endl;
    }
};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age, string language)
        : Employee(name, company, age) 
    {
        FavProgrammingLanguage = language;
    }

    void FixBug() {

        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    }
};

int main() {
    
    Developer d = Developer("Parthip", "Amazon", 34, "C++");

    d.IntroduceYourself(); 
    d.FixBug();            
    d.askforpromotion();   

    return 0;
}