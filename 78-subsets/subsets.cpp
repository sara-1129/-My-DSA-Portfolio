class Solution {
public:
    void generateSubsets (vector<int> &nums, vector<int> &temp,int idx,             vector<vector<int>> &ans){
        int n = nums.size();
        if(idx >= n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        generateSubsets(nums,temp,idx + 1,ans);
        temp.pop_back();
        generateSubsets(nums,temp,idx + 1,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        generateSubsets(nums, temp,0,ans);
        return ans;
    }
};