class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        
        //Decrease value by 1
        for(int i=0;i<n;i++)
        arr[i]--;
        
        //Accurance
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        vector<int>ans(2);
        for(int i=0;i<n;i++)
        {
            //repeating element
            if(arr[i]/n==2)
            ans[0]=i+1;
            else if(arr[i]/n==0)
            ans[1]=i+1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna