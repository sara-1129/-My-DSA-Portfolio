class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return true;
        int inversion  = 0 ;// cnt
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i+1]) {
                inversion++;
            }
        }
        if(inversion == 0)return true;
        if(inversion ==  1 && nums[0] >= nums[n - 1])return true;
        return false;
    }
};