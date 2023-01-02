#include<iostream>
using namespace std;

class Myself {
  public:
    void myFunction() {
      cout << "about fam" ;
      cout<<"age is= 32";
    };
};


class MyChild: public Myself {
    string age;
    void myage(){
        int age=22;
        cout<<"my age";
    };
};

class GrandChild: public MyChild {
};

int main() {
  GrandChild mydad;
  mydad.myFunction();
  return 0;
}