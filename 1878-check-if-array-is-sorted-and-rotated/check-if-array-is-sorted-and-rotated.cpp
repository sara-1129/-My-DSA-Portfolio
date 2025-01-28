class Solution {
public:
    bool check(vector<int>& nums) {
        
       
        int n = nums.size();
        int count = 0;
        
        for(int k = 0; k < n; k++)
        {
            if (nums[k]>nums[(k+1)%n])
            {
                count++;
            }
        }
        if (count > 1)
        {
            return false;
        }

        return true;
        
    }
};