#include<iostream>
using namespace std;
int main() {
  int row,col;
  for(row=1;row<=5;row+=1) 
  {
    
    for(col=1;col<=5;col+=1) 
    {
      char name='A'+col-1;
      cout<<name<<" ";
    }
     cout<<endl;
  }
}