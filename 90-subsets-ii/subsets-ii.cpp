class Solution {
public:
    void subsets(vector<int>& nums, vector<int>& temp, set<vector<int>>& ans, int idx)
    {
        int n = nums.size();
        if(idx >= n)
        {
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        subsets(nums, temp, ans, idx + 1);
        temp.pop_back();
        subsets(nums, temp, ans, idx + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        vector<int> temp;
        subsets(nums, temp, ans, 0);
        vector<vector<int>> finalAns(ans.begin(), ans.end());
        return finalAns;
    }
};