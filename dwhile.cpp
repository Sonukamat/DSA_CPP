#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the number";
  cin>>n;
  int i=1;//initialization
  do {
    cout<<i<<endl;
    i++;//update
  } while(i<=n);//breake condition
}
//for table of n just change the cout line to cout<<n<<"*"<<i<<"="<<n*i<<endl;