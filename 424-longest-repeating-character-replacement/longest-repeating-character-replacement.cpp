class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxf = 0;
        int maxlen = 0;
        int l = 0;
        int r = 0;
        unordered_map <char, int> mp;
        while(r < n)
        {
            mp[s[r]]++;
            maxf = max(mp[s[r]], maxf);
            if(r - l + 1 - maxf <= k)
            {
                maxlen = max(maxlen, r - l + 1);
            }
            if(r - l + 1 - maxf > k)
            {
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return maxlen;
    }
};