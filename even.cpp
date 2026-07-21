#include<iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter the number";
  cin>>n;
  for(int i=1;i<=n;i+=1){
    if(i%2==0) {
      cout<<i<<" ";
    }
  }
  

}
