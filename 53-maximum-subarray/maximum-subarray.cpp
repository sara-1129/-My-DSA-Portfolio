class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int n = nums.size();
        
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += nums[j];
                if (sum > maxSum)
                {
                    maxSum = sum;
                }
                if (sum < 0)
                {
                    sum = 0;
                }
            }
        
       
        return maxSum;
       
    }
};