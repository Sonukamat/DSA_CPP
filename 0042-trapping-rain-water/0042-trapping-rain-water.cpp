class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),water =0;
        int leftmax = 0, rightmax=0,maxheight = height[0],  index=0;

        // Max height buliding
        for(int i=1;i<n;i++)
        {
            if(maxheight<height[i])
            {
                maxheight= height[i];
                index =i;
            }
        }

        //Left part 

        for(int i=0;i<index;i++)
        {
            if(leftmax>height[i])
            water+=leftmax-height[i];
            else
            leftmax = height[i];
        }

        //Right Part
        for(int i=n-1;i>index;i--)
        {
            if(rightmax>height[i])
            water+=rightmax-height[i];
            else
            rightmax = height[i];
        }
        return water;


        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna