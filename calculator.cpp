#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    char op;
    cin>>op;
    cout<<"enter first number"<< a <<endl;
    cout<<"enter operator"<< op <<endl;
    cout<<"enter second number"<<b <<endl;
    int result;
    if(op=='+'){
        result = a+b;

    }else if(op=='-'){
        result = a-b;

    }else if(op=='*'){
        result =a*b;

    }else if(op=='/'){
        result =a/b;
    }
    else{ 
        cout<<"invalid ";
    }
}