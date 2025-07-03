class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mini = 5001;
        while(high >= low)
        {
            int mid = low + (high - low)/2;
            if(nums[low] <= nums[mid])
            {
                mini = min(nums[low],mini);
                low = mid + 1;
            }
            else
            {
                mini = min(nums[mid],mini);
                high = mid - 1;
            }
        }
        return mini;
    }
};