class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        string word = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] != ' ')
            {
                word += s[i];
            }
            else {
                if(!word.empty() && ans.empty())
                {
                   ans.insert(0,word);
                }
                else if(!word.empty())
                {
                    ans.insert(0,word + " ");
                }
                word = "";
            }
            
        }
        if(!word.empty() && ans.empty())
                {
                   ans.insert(0,word);
                }
                else if(!word.empty())
                {
                    ans.insert(0,word + " ");
                }
        
        return ans;
    }
};