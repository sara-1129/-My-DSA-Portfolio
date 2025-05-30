class Solution {
public:
    string compStr(string str1, string str2)
    {
        int n = str1.length();
        int m = str2.length();
        string ans ="";
        for(int i = 0; i <min(n,m);i++)
        {
            if(str1[i] == str2[i])
            {
                ans += str1[i];
            }
            else {
                break;
            }
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = strs[0];
        for(int i = 1; i < n; i++)
        {
            ans = compStr(ans,strs[i]);
            if(ans =="")
            {
                break;
            }
        }
        return ans;
    }
};