class Solution {
public:

    string rotateByOne(string s)
    {
        reverse(s.begin() + 1, s.end());
        reverse(s.begin(), s.end());
        return s;
    }

    bool rotateString(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        string temp = s;
        for(int i = 0; i < n; i++)
        {
            temp = rotateByOne(temp);
            if(temp == goal)return true;
        }
        return false;
    }
};