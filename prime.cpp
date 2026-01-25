#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter a number:";
  cin>>n;
  if(n<2) {
    cout<<"not a prime number"<<endl;
    return 0;
  }
  else{
    for(int i=2;i<n;i+=1) {
      if(n%i==0) {
        cout<<"not a prime number"<<endl;
        return 0;

      }
      }
      cout<<"prime number"<<endl;
      return 0;
    }
}
   