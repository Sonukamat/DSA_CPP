#include<iostream>
#include<climits>
using namespace std;

class solution{
public:
    int print2largest(int arr[], int n) {
        
        int largest = INT_MIN;
        int second = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            
            if(arr[i] > largest) {
                second = largest;
                largest = arr[i];
            }
            else if(arr[i] > second && arr[i] != largest) {
                second = arr[i];
            }
        }
        
        if(second == INT_MIN)
            return -1;
            
        return second;
    }
};
