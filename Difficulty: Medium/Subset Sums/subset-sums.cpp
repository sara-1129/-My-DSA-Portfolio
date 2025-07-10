class Solution {
  public:
    void getSum (vector<int>& arr, vector<int>& ans, int idx, int sum)
    {
        int n = arr.size();
        if(idx >= n)
        {
            ans.push_back(sum);
            return;
        }
        
        getSum(arr, ans, idx + 1, sum + arr[idx]);
        getSum(arr, ans, idx + 1, sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int> ans;
        
        getSum(arr, ans, 0, 0);
        return ans;
        
    }
};