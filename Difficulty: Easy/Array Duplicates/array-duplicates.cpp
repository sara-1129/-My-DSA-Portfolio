class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        vector <int> nums;
        for(auto it:mp)
        {
            if(it.second > 1)
            {
                nums.push_back(it.first);
            }
        }
        return nums;
    }
};