class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mini = 5001;
        for(int i = 0; i < n; i++)
        {
            mini = min(nums[i],mini);
        }
        return mini;
    }
};