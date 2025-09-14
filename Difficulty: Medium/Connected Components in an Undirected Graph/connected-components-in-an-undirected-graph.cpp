
class Solution {
  public:
    void dfs (int node, vector<int>& visited, vector<vector<int>>& adj, vector<int>& arr) {
        if(visited[node])return;
        arr.push_back(node);
        visited[node] = 1;
        for(auto it:adj[node]) {
            if(!visited[it]) {
                dfs(it, visited, adj, arr);
            }
        }
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        int n = edges.size();
        vector<vector<int>> ans;
        vector<vector<int>> adj(V);
        vector<int> visited(V,0);
        for(int i = 0; i < n; i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i = 0; i < V; i++) {
            vector<int> arr;
            if(!visited[i])
            {
                dfs(i, visited, adj, arr);
                ans.push_back(arr);
            }
        }
        return ans;
    }
};
