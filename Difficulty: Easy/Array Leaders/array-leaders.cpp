

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int leader = arr[n - 1];
        ans.push_back(leader);
        for(int i = n - 2; i >= 0; i--) {
                if( arr[i] >= leader) {
                    leader = arr[i];
                    ans.push_back(leader);
                }
            }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};