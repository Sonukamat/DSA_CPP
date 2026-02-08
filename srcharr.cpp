#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& arr, int X)
{
   for(int i=0; i<arr.size(); i++)
   {
     if(arr[i]==X)
       return i;
   }
   return -1;
}

int main()
{
    int N, X;
    cout << "Enter size of array: ";
    cin >> N;
    vector<int> arr(N);
    cout << "Enter array elements: ";
    for(int i=0; i<N; i++) cin >> arr[i];
    cout << "Enter value to search: ";
    cin >> X;
    int result = search(arr, X);
    if(result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
