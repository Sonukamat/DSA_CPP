#include<iostream>
using namespace std;
int main() {
    int arr[5]={5,4,3,2,1};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //max value in array
    int maximum=arr[0];
    for(int j=1;j<5;j++){
        if(arr[j]>maximum){
            maximum=arr[j];
        }
    }
    cout<<"Max value in array is: "<<maximum<<endl;
    //min value in array
    int minimum=arr[0];
    for(int j=1;j<5;j++){
        if(arr[j]<minimum){
            minimum=arr[j];
        }
    }
    cout<<"Min value in array is: "<<minimum<<endl;
}
