class Solution {
public:
    vector<vector<int>> adjList(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        return adj;

    } 
    void dfs(vector<vector<int>>& adj, vector<int>& visited, int node) {
        if(visited[node])return;
        visited[node] = 1;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                dfs(adj, visited, it);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adj = adjList(isConnected);
        int n = adj.size();
        vector<int> visited(n, 0);
        int provinces = 0;
        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                provinces++;
                dfs(adj, visited, i);
            }
        }
        return provinces;
    }
};