#include<iostream>
using namespace std;
int main() {
  int row,col;
  int n;
   cout<<"enter the value of n:"<<endl;
    cin>>n;
    for(row=1;row<=n;row+=1)
  {
    for (col=1;col<=n-row;col+=1)
    cout<<" ";
    for(col=1;col<=row;col+=1)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}