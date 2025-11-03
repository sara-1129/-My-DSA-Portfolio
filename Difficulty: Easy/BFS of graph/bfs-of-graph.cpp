class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        queue<int> q;
        vector<int> visited(n,0);
        vector<int> ans;
        q.push(0);
        visited[0] = 1;
        
        while(!q.empty()) {
            int ele = q.front();
            ans.push_back(ele);
            q.pop();
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