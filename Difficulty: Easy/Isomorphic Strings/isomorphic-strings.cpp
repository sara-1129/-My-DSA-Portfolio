class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s1, string &s2) {

        // Your code here
        if(s1.length() != s2.length())
        {
            return false;
        }
        int n = s1.length();
        for(int i = 0; i < n; i++)
        {
            char c1 = s1[i];
            char c2 = s2[i];
            for(int j = 0; j < n; j++)
            {
                if(s1[j] == c1 && s2[j] != c2)
                {
                    return false;
                }
                if(s1[j] != c1 && s2[j] == c2)
                {
                    return false;
                }
            }
        }
        return true;
    }
};