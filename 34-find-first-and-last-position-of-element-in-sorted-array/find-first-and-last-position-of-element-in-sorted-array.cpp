class Solution {
public:
    int firstOccurence(vector<int>& nums, int target, int low, int high) {
        int first = -1;
        while(high >= low)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                first = mid;
                high = mid - 1;
            }
        }
        return first;
    }
    int lastOccurence(vector<int>& nums, int target, int low, int high) {
        int last = -1;
         while(high >= low)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] > target)
            {
                high = mid - 1;
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                last = mid;
                low = mid + 1;
            }
        }
        return last;
    }
    

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int first = firstOccurence(nums,target,low,high);
        int last = lastOccurence(nums,target,low,high);

        return {first, last};
    }
};