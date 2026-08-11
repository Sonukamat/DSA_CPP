class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        //column wise reverse
        for(int j=0;j<n;j++)
        {
            int start = 0,end = n-1;
            while(start<end)
            {
                swap(mat[start][j],mat[end][j]);
                start++,end--;
            }
        }
        //row wise reverse
        
        for(int i=0;i<n;i++)
        {
            int start = 0,end = n-1;
            while(start<end)
            {
                swap(mat[i][start],mat[i][end]);
                start++,end--;
            }
        }
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna