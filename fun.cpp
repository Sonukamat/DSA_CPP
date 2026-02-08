#include<iostream>
using namespace std;
int sum(int m, int n)//function declaration
{
  int ans=m+n;//function definition
  return ans;
}
int mul(int m, int n)//function declaration
{
  int ans=m*n;//function definition
  return ans;
}
void fun()
{
  cout<<"Hello Coder Army \n"<<endl;
}
int main() {
  int a,b;
  cout<<"enter two numbers: ";
  cin>>a>>b;
  //Function call
  cout<<sum(a,b);
  cout<<endl;
  cout<<mul(a,b);
  fun();
}