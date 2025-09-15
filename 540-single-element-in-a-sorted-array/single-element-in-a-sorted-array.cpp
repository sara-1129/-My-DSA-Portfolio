class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        int low = 0;
        int high = n - 1;
        while(high >= low) {
            if (low == high && high == 0)return nums[0];
            int mid = low + (high - low) / 2;
            if(nums[mid - 1] == nums[mid]) {
                if(mid % 2 == 0) {
                    high = mid - 2;
                }
                else {
                    low = mid + 1;
                }
            }
            else if(nums[mid] == nums[mid + 1]) {
                if(mid % 2 == 0) {
                    low = mid + 2;
                }
                else {
                    high = mid - 1;
                }
            } 
            else {
                return nums[mid];
            }
        }
        return -1;
    }
};