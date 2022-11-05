#include <iostream>

using namespace std;
class Employee{
    public:
    string name;
    string company;
    int age;
     void introduce(){
         cout<<" my name : "<<name;
         cout<<" i work in "<<company;
         cout<<" my age is "<<age<<endl;
         
     }
};

int main()
{
    Employee employee1;
    employee1.name="DHRUV";
    employee1.company="google";
    employee1.age=20;
    employee1.introduce();
Employee employee2;
    employee2.name="aryan";
    employee2.company="google";
    employee2.age=20;
    employee2.introduce();

    return 0;
}