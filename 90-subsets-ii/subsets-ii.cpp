class Solution {
public:
    void subsets(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, int idx,int size)
    {
        int n = nums.size();
        if((temp.size() == size))
        {
            ans.push_back(temp);
        }
        if(idx >= n)
        {
            return;
        }
        for(int i = idx; i < n; i++)
        {
            if(i > idx && nums[i] == nums[i - 1])continue;
            temp.push_back(nums[i]);
            subsets(nums, temp, ans, i + 1, size + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans = {};
        vector<int> temp;
        subsets(nums, temp, ans, 0, 0);
        return ans;
    }
};