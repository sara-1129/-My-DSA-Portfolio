class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        if(n != m)
        {
            return false;
        }
        string temp = s + s;
        bool ans = temp.find(goal) < temp.length();
        return ans;
    }
};