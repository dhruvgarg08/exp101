#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    double height;
    public:
    void hero(){
        cout<<"i "<<name;
        cout<<" my age "<<age;
        cout<<" hieght "<<height;


    }
    student(string aname,int aage,double aheight){
        name = aname;
        age= aage;
        height= aheight;
    }
};
int main(){
    student student1("dhruv", 19, 5.6);
    student1.hero();
}