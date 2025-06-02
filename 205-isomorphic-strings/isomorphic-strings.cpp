class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            char c1 = s[i];
            char c2 = t[i];
            for (int j = 0; j < n; j++)
            {
                if(s[j] == c1 && t[j] != c2 )
                {
                    return false;
                }
                if(s[j] != c1 && t[j] == c2 )
                {
                    return false;
                }
            }
        }
        return true;
    }
};