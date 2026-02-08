#include<iostream>
using namespace std;

// Function to count the number of digits in a number
int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
    int n = abs(num);
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    if (num < 0) return false;
    if (num == 0) return true;
    
    int originalNum = num;
    int numDigits = countDigits(num);
    long long sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        long long power = 1;
        for (int i = 0; i < numDigits; i++) {
            power *= digit;
        }
        sum += power;
        num /= 10;
    }
    
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrong(num)) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }
    
    return 0;
}
