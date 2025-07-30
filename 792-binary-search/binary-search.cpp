class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low,
                     int high) { // base case
        int mid = low + (high - low) / 2;
        if (high >= low)
        {
            if (nums[mid] == target) 
            {
                return mid;
            } 
            else if (nums[mid] > target) 
            {
                return binarySearch(nums, target, low, mid - 1);
            }
             else 
            {
               return binarySearch(nums, target, mid + 1, high);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = binarySearch(nums, target, 0, n - 1);
        return ans;
    }
};