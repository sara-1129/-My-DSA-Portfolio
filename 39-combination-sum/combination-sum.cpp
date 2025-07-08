class Solution {
public:
    void getSequences(vector<int>& candidates, int target, int idx,
                      vector<int>& temp, vector<vector<int>>& ans) {
        int n = candidates.size();
        if (idx >= n || target == 0) {
            if (target == 0) {
                ans.push_back(temp);
            }
            return;
        }
        if(target - candidates[idx] >= 0)
        {
            temp.push_back(candidates[idx]);
            getSequences(candidates, target - candidates[idx], idx, temp, ans);
            temp.pop_back();
        }
            getSequences(candidates, target, idx + 1, temp, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        getSequences(candidates, target,0, temp, ans);
        return ans;

    }
};