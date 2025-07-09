class Solution {
public:
    void getSequences(vector<int>& candidates, int target, int idx,
                      vector<int>& temp, vector<vector<int>>& ans) {
    int n = candidates.size();
    if(idx >= n || target == 0)
    {
        if(target == 0)
        {
            ans.push_back(temp);
        }
        return ;
    }
    for(int i = idx; i < n; i++)
    {
        if(target - candidates[i] < 0)break;
        if(i > idx && candidates[i] == candidates[i-1])continue;
        
            temp.push_back(candidates[i]);
            getSequences(candidates, target - candidates[i], i + 1, temp,ans);
            temp.pop_back();
        
        
    }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        getSequences(candidates, target, 0, temp, ans);
        
        return ans;
    }
};