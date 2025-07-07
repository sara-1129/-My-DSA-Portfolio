class Solution {
public:
    void generateSubsets(vector<int>& nums, vector<int>& temp,
                         vector<vector<int>>& ans, int idx) {
        int n = nums.size();
        if (idx >= n) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        generateSubsets(nums, temp, ans, idx + 1);
        temp.pop_back();
        generateSubsets(nums, temp, ans, idx + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        generateSubsets(nums, temp, ans, 0);
        return ans;
    }
};