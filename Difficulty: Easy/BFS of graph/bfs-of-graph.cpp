class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        queue<int> q;
        int visited[n] = {0};
        visited[0] = 1;
        q.push(0);
        while(!q.empty()) {
            int ele = q.front();
            ans.push_back(ele);
            q.pop();
            for(int j = 0; j < adj[ele].size(); j++)
            {
                if(!visited[adj[ele][j]]) {
                    q.push(adj[ele][j]);
                    visited[adj[ele][j]] = 1;
                    
                }
            }
            
        }
        return ans;
    }
};