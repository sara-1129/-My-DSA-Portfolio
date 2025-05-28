class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        stack <string> words;
        string word;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != ' ')
            {
                word += s[i];
            }
            else {
                if(!word.empty())
                {
                    words.push(word);
                    word = "";
                }
            }
        }
        if(!word.empty())
        {
            words.push(word);
        }
        while(words.size() != 1)
        {
            ans += words.top() + " ";
            words.pop();
        }

        ans += words.top();
        return ans;
    }
};