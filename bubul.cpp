#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout<<"enter the size of array: ";
  cin>>n;
  cout<<"enter the elements of array: ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=n-2;i>=0;i--)
  {
    bool swapped=false;
    for(int j=0;j<=i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        swapped=true;
      }
    }
    if(!swapped)
      break;
  }
  cout << "Sorted array: ";
  for(int i=0;i<n;i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}