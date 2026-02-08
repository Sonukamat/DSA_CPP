#include<iostream>
using namespace std;
char convert(char name)
{
  char ans=name-'a'+'A';//main formula to small to capital  
  return ans;
}
int main() 
{
  char name;
  cin>>name;
  cout<<convert(name);


}
