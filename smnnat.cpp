#include<iostream>
using namespace std;
int main() {
  int n,i;
  int sum =0;
  cout<<"enter the number"<<endl;
  cin>>n;
  for(i=1;i<=n;i+=1) {

    sum=sum+i;
  }
  cout<<sum;
}
//formula =n(n+1)/2