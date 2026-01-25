#include<iostream>
using namespace std;
int main() {
  int row,col;
  for(row=1;row<=5;row+=1)
  {
    for(col=1;col<=5-(row-1);col=col+1)
    {
      cout<<"*"<<" ";
    }
    cout<<endl;
  }
}
//for(row=5;row>=1;row-=1)
//for(col=1;col<=row;col+=1) 2nd method to print the same pattern