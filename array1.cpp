#include<iostream>
using namespace std;
int main() {
  int arr[100];
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;//size of array
  cout<<"Enter the elements of the array: ";
  for(int i=0;i<n;i++)
  cin>>arr[i];
  //selection sort
  for(int i=0;i<n-1;i++)
  {
    int index =i;
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[index])
      index=j;
    }
    swap(arr[i],arr[index]);
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";

  }
}