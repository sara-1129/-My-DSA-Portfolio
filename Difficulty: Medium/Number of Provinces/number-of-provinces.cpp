// User function Template for C++

class Solution {
  public:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& visited)
    {
        if(visited[node])return;
        visited[node] = 1;
        for(auto it: adj[node])
        {
            if(!visited[it])dfs(it, adj, visited);
        }
    }
    int numProvinces(vector<vector<int>>& isConnected, int n) {
        // code here
        int cnt = 0;
        vector<int> visited(n,0);
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(isConnected[i][j] == 1)adj[i].push_back(j);
            }
        }
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                dfs(i , adj, visited);
                cnt++;
            }
        }
        return cnt;
    }
};