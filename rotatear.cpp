#include<iostream>
using namespace std;
void rotate(int arr[],int n) {
    if (n <= 1) return;
    int temp = arr[0];
    for(int i=0; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    rotate(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
  }
  return 0;
}