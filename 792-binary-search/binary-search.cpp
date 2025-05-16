class Solution {
public:
    int binarysearch(vector<int>& nums, int target, int low, int high) {
        if (high >= low) {
            int mid = (low + high)/2;
            if (nums[mid] > target) {
               return binarysearch(nums, target, low, mid - 1);
            } else if (nums[mid] < target) {
               return binarysearch(nums, target, mid + 1, high);
            } else if (nums[mid] == target) {
                return mid;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binarysearch(nums, target, 0, n - 1);
    }
};