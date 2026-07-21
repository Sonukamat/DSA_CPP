#include<iostream>
using namespace std;
int main() {
  int num;
  cout<<"enter the num";
  cin>>num;
  int rem,ans=0,mul=1;
  while(num>0)
  {
    //remender to declare variable inside the loop
    rem=num%2;

    //quotient and remainder
    num=num/2;
    //ans
    ans=rem*mul+ans;

    //mul
    mul=mul*10;

  }
  cout<<ans<<endl;
}