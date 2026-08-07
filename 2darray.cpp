#include<iostream>
#include<climits>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
    // Print elements column-wise
    for (int j = 0; j < col; ++j) {
        for (int i = 0; i < row; ++i) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}
void printrowmax(int arr[][4], int row, int col)
{
    int index = -1, sum = INT_MIN;

    for (int i = 0; i < row; ++i) {
        int total = 0;

        for (int j = 0; j < col; ++j) {
            total += arr[i][j];
        }

        if (total > sum) {
            sum = total;
            index = i;
        }
    }
    cout << index << endl;
}

// Matrix subtraction (arr1 - arr2)
void subtractmat(int arr1[][4], int arr2[][4], int row, int col)
{
    cout << "Difference (arr1 - arr2):" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr1[i][j] - arr2[i][j] << " ";
        }
        cout << endl;
    }
}

// Matrix transpose
void transpose(int arr[][4], int row, int col)
{
    cout << "Transpose of arr1:" << endl;
    for (int j = 0; j < col; ++j) {
        for (int i = 0; i < row; ++i) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Sum of diagonal elements
void diagsum(int arr[][4], int row, int col)
{
    int pdiag = 0, sdiag = 0;
    for (int i = 0; i < row; ++i) {
        pdiag += arr[i][i];                    // primary diagonal
        if (i != col - 1 - i)                  // avoid double count
            sdiag += arr[i][col - 1 - i];      // secondary diagonal
    }
    cout << "Primary diagonal sum: " << pdiag << endl;
    cout << "Secondary diagonal sum: " << sdiag << endl;
    cout << "Total diagonal sum: " << pdiag + sdiag << endl;
}

// Search an element in 2D array
void search(int arr[][4], int row, int col, int key)
{
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            if (arr[i][j] == key) {
                cout << "Element " << key << " found at (" << i << "," << j << ")" << endl;
                return;
            }
    cout << "Element " << key << " not found" << endl;
}

int main(){
    // create 2d array
    int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {0, 1, 3, 4, 6, 7, 10, 11, 41, 19, 9, 11};
    int ans[3][4];

    // Print row index with maximum sum
    cout << "Row index with max sum in arr1: ";
    printrowmax(arr1, 3, 4);

    // Add 2 matrix (arr1 + arr2 -> ans)
    cout << "Sum of arr1 and arr2 matrix:" << endl;
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 4; col++) {
            ans[row][col] = arr1[row][col] + arr2[row][col];
            cout << ans[row][col] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Matrix subtraction
    subtractmat(arr1, arr2, 3, 4);
    cout << endl;

    // Matrix transpose
    transpose(arr1, 3, 4);
    cout << endl;

    // Diagonal sums
    diagsum(arr1, 3, 4);
    cout << endl;

    // Search an element
    search(arr1, 3, 4, 7);

    return 0;
}
