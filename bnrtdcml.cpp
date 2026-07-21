#include<iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  int mul=1,ans=0,rem;
  while(num>0)
  {
    //remender
    rem=num%10;
    //num ko divide kar do
    num=num/10;
    //ans
    ans=ans+rem*mul;
    //mul
    mul=mul*2;
  }
  cout<<"The decimal equivalent is: "<<ans<<endl;
}