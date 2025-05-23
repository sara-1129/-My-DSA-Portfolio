class Solution {
public:
    string reverseWords(string s) {
      
        string word = "";
        string ans = "";
        s += " ";
        int n = s.length();
        stack <string> temp;
        for(int i = 0; i < n; i++)
        {
            if(s[i]==' ')
            {
                if(!word.empty())
                {
                    temp.push(word);
                    word ="";
                }
            }
            else {
                word += s[i];
            }
        }
        while(temp.size() != 1)
        {
            ans += temp.top();
            ans += " "; 
            temp.pop();
        }
        ans += temp.top();
        return ans;
    }
};