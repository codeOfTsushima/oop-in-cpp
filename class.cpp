#include <iostream>
using namespace std;
//Classes are userdefined data types

class Employee{
    public:
    string Name;
    string Company;
    int Age;
   
    void IntroduceYourself(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
        
        
    }
};
int main()
{

    Employee emp1; //variable of type employee
    emp1.Name="Parthip";
    emp1.Company="Google";  
    emp1.Age=19;
    emp1.IntroduceYourself();

   Employee emp2;
   emp2.Name="GiggaChad";
   emp2.Company="Bigbazaar";
   emp2.Age=67;
   emp2.IntroduceYourself();

}
//There are 3 access specifers in Cpp. They are private, public and protected
//Everyting inside the class is private by default