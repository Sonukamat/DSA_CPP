#include <iostream>
#include <vector>
using namespace std;

// Checks if the array can be divided into two parts with equal sum
bool divide(const vector<int>& arr)
{
    long long total_sum = 0;
    for (int x : arr)
        total_sum += x;

    // If total sum is odd, it can never be divided into two equal parts
    if (total_sum % 2 != 0)
        return false;

    long long prefix = 0;
    for (int x : arr)
    {
        prefix += x;
        if (total_sum == 2 * prefix)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    vector<int> v(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (divide(v))
        cout << "\nYES: The array can be divided into two parts with equal sum." << endl;
    else
        cout << "\nNO: The array cannot be divided into two parts with equal sum." << endl;

    return 0;
}

