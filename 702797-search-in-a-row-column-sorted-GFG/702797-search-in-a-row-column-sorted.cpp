class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        int n = arr.size();
        int m = arr[0].size();

        int row = 0, col = m - 1;

        while (row < n && col >= 0)
        {
            if (arr[row][col] == x)
                return 1;
            else if (arr[row][col] < x)
                row++;
            else
                col--;
        }

        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna