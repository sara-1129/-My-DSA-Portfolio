class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        queue<int> q;
        int visited[n] = {0};
        q.push(0);
        visited[0] = 1;
        while(!q.empty()) {
            int ele = q.front();
             q.pop();
            ans.push_back(ele);
            for(auto it : adj[ele]) {
                if(!visited[it]) {
                    q.push(it);
                    visited[it] = 1;
                }
            }
        }
        return ans;
        
    }
};