class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCount = 1;
        int cnt = 1;
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n-1; i++)
        {
            if (nums[i] == nums[i+1])
            {
                continue;
            }
            if (nums[i] == nums[i+1] - 1)
            {
                cnt++;
            }
            else{
                cnt = 1;
            }
            if (cnt > maxCount)
            {
                maxCount = cnt;
            }
        }
        return maxCount;


    }
};