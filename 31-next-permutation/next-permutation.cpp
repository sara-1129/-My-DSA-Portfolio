class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return;
        int breakpoint = -1;
        int nextGreatElement;
        for(int i = n-2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                breakpoint = i;
                break;
            }
        }
        if(breakpoint == -1) {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = n-1; i >= 0; i--) {
            if(nums[i] > nums[breakpoint]) {
                nextGreatElement = i;
                break;
            }
        }
        swap(nums[nextGreatElement],nums[breakpoint]);
        sort(nums.begin() + breakpoint + 1, nums.end());
    }
};