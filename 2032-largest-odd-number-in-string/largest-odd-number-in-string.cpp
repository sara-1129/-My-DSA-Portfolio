class Solution {
public:
    string largestOddNumber(string num) {
        string ans = num;
        
        while(!ans.empty())
        {
            int n  = ans.length();
            string temp(1,ans[n-1]);
            int check = stoi(temp);
            if(check % 2 != 0)
            {
                return ans;
            }
            else {
                ans.pop_back();
            }
        }
        return ans;
    }
};