class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n - 1;
        if(target <= nums[0])return 0;
        while(high >= low)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] >= target)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};