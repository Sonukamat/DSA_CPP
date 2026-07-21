#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    // Upper half
    for(int row=1; row<=n; row++){
        // Left stars
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        // Spaces
        for(int col=1; col<=2*(n-row); col++){
            cout<<" ";
        }
        // Right stars
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower half
    for(int row=n-1; row>=1; row--){
        // Left stars
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        // Spaces
        for(int col=1; col<=2*(n-row); col++){
            cout<<" ";
        }
        // Right stars
        for(int col=1; col<=row; col++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
