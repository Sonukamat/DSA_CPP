#include<iostream>
using namespace std;
int main() {
  int row,col;
  int count=1;
  for(row=1;row<=5;row+=1)
  {
    for(col=1;col<=5;col+=1)
    {
      cout<<count<<" ";
      count=count+1;
    }
    cout<<endl;
  }
}
//cout<<(row-1)*5+col<<" "; 2nd method to print the same pattern