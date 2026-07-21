#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " is the largest number" << endl;
    else if (b > a && b > c)
        cout << b << " is the largest number" << endl;
    else
        cout << c << " is the largest number" << endl;

    // vowel or consonant
    char name = 'b';
    if (name == 'a' || name == 'e' || name == 'i' || name == 'o' || name == 'u' ||
        name == 'A' || name == 'E' || name == 'I' || name == 'O' || name == 'U') {
        cout << name << " is a vowel" << endl;
    } else {
        cout << name << " is a consonant" << endl;
    }

    cout << !123 << endl; // not operator
    cout << !(a > b) << endl;

    return 0;
}
