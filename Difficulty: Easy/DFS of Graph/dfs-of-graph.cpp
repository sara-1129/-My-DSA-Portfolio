class Solution {
  public:
    void traverse(vector<vector<int>>& adj, vector<int>& visited, vector<int>& ans, int node)
    {
        if(visited[node])return;
        visited[node] = 1;
        ans.push_back(node);
        for(auto it : adj[node]) {
            if(!visited[it]) {
                traverse(adj,visited,ans,it);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<int> visited(n,0);
        traverse(adj, visited, ans, 0);
        return ans;
    }
};