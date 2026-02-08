#include<iostream>
using namespace std;
bool prime(int n)
{
  if(n<2)
  return 0;
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
    return 0;
  }
  return 1;
}
int fact(int n)
{
  int ans=1;
  for(int i=1;i<=n;i++)
  
    ans=ans*i;
  return ans;
}
int main() {
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;  
  // A is prime or not
  cout<<prime(a)<<endl;
  //A ka factorial
  cout<<fact(a)<<endl;
  //B ka prime or not
  cout<<prime(b)<<endl;
  //B ka factorial
  cout<<fact(b)<<endl;
  //B-A is prime or not
  cout<<prime(b-a)<<endl;
  //B-A ka factorial
  cout<<fact(b-a)<<endl;
}
//default parameter functions
//fun(int a=3)
//fun() -> fun(3)
//simple return means return k baad function khatam ho jata hai
//void return means return k baad function khatam nahi hota