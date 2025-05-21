class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string ans = "";
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] =='(')
            {
                if(cnt1 > 0)
                {
                    ans.push_back('(');
                }
                cnt1++;
            }
            else if (s[i] == ')')
            {
                cnt2++;
                if(cnt1 != cnt2)
                {
                    ans.push_back(')');
                }
                
            }
            if(cnt1 == cnt2)
            {
                cnt1 = 0;
                cnt2 = 0;
            }
        }
        return ans;
    }
};