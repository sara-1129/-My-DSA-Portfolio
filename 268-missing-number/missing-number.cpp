class Solution {
public:
    bool linearSearch(vector<int> &nums , int num) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == num) 
            {
                return true;
            }
            
        }
        return false;
    }
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n+1; i++) {
            if(!linearSearch(nums,i))
            {
                return i;
            }
        }
        return -1;
    }
};