class Solution {
public:

    void subsetGenerator(int idx ,vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans) {
        int n = nums.size();
        if(idx >= n) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        subsetGenerator(idx + 1, nums, temp, ans);
        temp.pop_back();
        subsetGenerator(idx + 1, nums, temp, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsetGenerator(0,nums,temp,ans);
        return ans;
    }
};