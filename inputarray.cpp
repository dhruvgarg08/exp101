#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int input[100];
    /*enter number*/
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
   for(int i=0;i<n;i++){
  cout<<input[i]<<endl;}
    return 0;
}