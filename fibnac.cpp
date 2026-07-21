#include<iostream>
using namespace std;
int main() {
  int a=0,b=1,c;
  int n;
  cout<<"enter the number of terms:";
  cin>>n;
  for(int i=0;i<=n;i+=1) {
    if(i<=1) {
      c=i;
      cout<<c<<endl;
    }
    else{
      c=a+b;
      a=b;
      b=c;
      cout<<c<<endl;
    }
  }
}