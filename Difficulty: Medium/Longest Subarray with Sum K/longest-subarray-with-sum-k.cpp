class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map <int,int> mp;
        int maxlen = 0;
        int len = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if(sum == k) 
            {
                len = i + 1;
            }
            if(mp.find(sum - k) != mp.end())
            {
                len = i - mp[sum - k] ;
            }
            maxlen = max(len, maxlen);
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        
        
        
        
        return maxlen;
    }
};