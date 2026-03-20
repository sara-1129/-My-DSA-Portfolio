class Solution {
  public:
    string PartyType(vector<int>& arr) {
        // Your code goes here
        map<int,int> mp;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second > 1) {
                return "true";
            }
        }
        return "false";
    }
};