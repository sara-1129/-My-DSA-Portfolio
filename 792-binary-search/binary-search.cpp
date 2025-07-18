class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                return binarySearch(nums, target, mid + 1, high);
            }

            if (nums[mid] > target) {
                return binarySearch(nums, target, low, mid - 1);
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size() - 1);
    }
};