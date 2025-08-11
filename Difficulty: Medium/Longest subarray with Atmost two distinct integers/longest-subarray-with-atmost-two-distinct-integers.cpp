class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n = arr.size();
        int r = 0;
        int l = 0;
        int cnt = 0;
        int maxlen = 0;
        unordered_map<int, int> mp;
        while(r < n)
        {
            if(mp.find(arr[r]) == mp.end() || mp[arr[r]] == 0)
            {
                cnt++;
            }
            mp[arr[r]]++;
                while( cnt > 2)
                {
                    mp[arr[l]]--;
                    if(mp[arr[l]] == 0)
                    {
                       cnt--;
                    }
                    l++;
                }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};