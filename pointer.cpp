#include<iostream>
using namespace std;
int main(){
    int age=19;
    /*memory address*/
    int *pAge =&age;
    string name="dhruv";
    string *pName =&name;
    cout<<pAge<<endl;
    cout<<pName<<endl;
}