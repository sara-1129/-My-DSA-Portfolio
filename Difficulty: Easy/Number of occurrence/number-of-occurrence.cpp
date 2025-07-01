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
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        
        int last = lastOccurence(arr,target,0,n-1);
        int first = firstOccurence(arr,target,0, n-1);
        int frequency = last - first + 1;
        if(first == -1)return 0;
        return frequency;
    }
};
