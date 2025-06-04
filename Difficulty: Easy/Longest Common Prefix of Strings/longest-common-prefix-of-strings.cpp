// User function template for C++
class Solution {
  public:
    string compStr(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        string ans = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
            break;
            }
            ans += s[i];
        }
        return ans;
    }
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int n = arr.size();
        string ans = arr[0];
        for(int i = 1; i < n; i++)
        {
         ans = compStr(ans,arr[i]);
         if(ans == "")
         {
             break;
         }
        }
        return ans;
    }
};