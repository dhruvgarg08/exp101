#include<iostream>
using namespace std;
class human{
    public:
    int age;
    int weight;
   
    string name;
    void setage(int a){
        
        age=a;
    }
     
    void setweight(int w){
        weight= w;
    }
};
class male :public human{
    public:
    string colour;
    void wakeup(){
        cout<<"men wakeup";
    }
    
};
int main(){
male object1;
cout<< "before age" << object1.age<<endl;
cout<< "before weight"<<object1.weight<<endl;

object1.setweight(65);
object1.setage(2);
cout<< object1.age<<endl;
cout<< object1.weight<<endl;

object1.wakeup();
}