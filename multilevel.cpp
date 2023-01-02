#include<iostream>
using namespace std;
class animal{
 public:
 int age;
 int weight;
 int height;
  
  void getage(int a){
    age a;

    
  }
  void weight(int w){
    weight w;
  }
};
class dog: public animal{
    public:
    string colour;
    void color(){
        cout<<"mostly brown or double coated"<<endl;
    }

};
class shepered:public dog{

};
int main(){
    shepered di;
    di.getage(23);
    cout<<di.age;
    di.color();


}