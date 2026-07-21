
#include<iostream>
using namespace std;
int main() {
  int n,fact=1;
  cout<<"enter the number";
  cin>>n;
  for(int i=1;i<=n;i+=1) {
    fact=fact*i;
  }
  
  cout << "Factorial of " << n << " is " << fact << endl;
  return 0;
}
