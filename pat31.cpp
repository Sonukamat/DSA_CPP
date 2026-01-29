#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // Upper half
    for(int row=1; row<=n; row++){
        // Spaces
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        // Stars
        for(int col=1; col<=2*row-1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower half
    for(int row=n-1; row>=1; row--){
        // Spaces
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }
        // Stars
        for(int col=1; col<=2*row-1; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
