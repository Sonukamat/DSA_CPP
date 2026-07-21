#include <iostream>
using namespace std;

int main() {
    int row, col, n;
    cout << "enter the input: ";
    cin >> n;

    // Upper Part
    for (row = n; row >= 1; row--) {
        for (col = 1; col <= row; col++) cout << "* ";
        
        // Beech ke spaces (Double spaces use karein)
        for (col = 1; col <= 2 * (n - row); col++) cout << "  ";
        
        for (col = 1; col <= row; col++) cout << "* ";
        cout << endl;
    }

    // Lower Part
    for (row = 1; row <= n; row++) {
        for (col = 1; col <= row; col++) cout << "* ";
        
        // Beech ke spaces
        for (col = 1; col <= 2 * (n - row); col++) cout << "  ";
        
        // Yahan "* " (space ke saath) dena zaroori hai alignment ke liye
        for (col = 1; col <= row; col++) cout << "* ";
        cout << endl;
    }
    return 0;
}