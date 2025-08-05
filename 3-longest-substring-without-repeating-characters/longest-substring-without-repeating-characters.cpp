class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        unordered_map<char, int> mp;
        int maxlen = 0;
        while(r < n)
        {
            if(mp.find(s[r]) == mp.end())
            {
                mp[s[r]] = r;
            }
            else
            {
                //If the previous occurence of character is not in current window we 
                //cant consider that it has already occured
                if(l < mp[s[r]] + 1)
                {
                    l = mp[s[r]] + 1;
                }
                mp[s[r]] = r;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        } 
        return maxlen;
    }
};