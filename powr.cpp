#include<iostream>
using namespace std;
int main() {
  int n,pow,num;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<"enter the power"<<endl;
  cin>>pow;
  num = n;
  for(int i=1;i<pow;i+=1) {
  num= num*n; 

  }
  cout<<num;
}