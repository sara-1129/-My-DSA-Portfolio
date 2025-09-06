class Solution {
  public:
    void traverse(int node, vector<vector<int>>& adj, vector<int> &visited, vector<int> &ans)
    {
        if(visited[node])return;
        ans.push_back(node);
        visited[node] = 1;
        for(auto it: adj[node]) {
            if(!visited[it]) {
                traverse(it, adj, visited, ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n =  adj.size();
        vector <int> visited(n, 0);
        vector<int> ans;
        
        traverse(0, adj, visited, ans);
        return ans;
        
    }
};