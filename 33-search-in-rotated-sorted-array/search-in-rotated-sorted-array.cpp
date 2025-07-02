class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        while (high >= low)
        {
            int mid  = low + (high-low)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && target  <= nums[mid])
                {
                    high = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else
            {
                if(nums[mid] <= target  && target <= nums[high])
                {
                    low = mid;
                }
                else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};