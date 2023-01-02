#include<iostream>
using namespace std;
class business {
    public:
    string Name;
    string Address;
    int Number;
    void abcd(){
        cout<<"company name "<< Name;
        cout<<" address "<< Address;
        cout<<" contact: "<< Number<<endl;

    }
    business(string name,string address,int number){
        Name = name;
        Address = address;
        Number = number;
    }
};
    
    int main(){
        business a1("GTC","Panipat",90999);
        business a2("RGRR","Panipat",9098989);
    a1.abcd();
    a2.abcd();
    
    }
