class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
    if( n == 1) return;
    int breakPt = -1;
    int nxtGreatEle;
    for(int i = n - 2; i >= 0; i--) {
        if(nums[i] < nums[i + 1]) {
            breakPt = i;
            break;
        }
    }

    if(breakPt == -1) {
        reverse(nums.begin(),nums.end());
        return;
    }
    for(int i = n - 1; i >= 0; i--) {
        if(nums[i] > nums[breakPt]) {
            nxtGreatEle = i;
            break;
        }
    }
    swap(nums[breakPt],nums[nxtGreatEle]);
    sort(nums.begin() + breakPt + 1,nums.end());

    
    }
};