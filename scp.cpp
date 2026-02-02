#include<iostream>
using namespace std;
int main() {
  int n=10;
  int i=30;
  for(int i=40;i<50;i++) {
    cout<<i<<endl;//first find its in scope then in outer scope
  }
}