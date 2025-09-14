class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        int n = edges.size();
        vector<vector<int>> ans(V);
        for(auto it:edges) {
            ans[it.first].emplace_back(it.second);
            ans[it.second].emplace_back(it.first);
        }
        
        return ans;
    }
};