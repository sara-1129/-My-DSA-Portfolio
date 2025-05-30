class Solution {
public:
string rotateByOne(string s) {
    int n = s.size();
    char temp = s[0];
    for(int i = 0; i< n-1; i++)
    {
        s[i] = s[i + 1];
    }
    s[n - 1] = temp;
    return s;
}
    bool rotateString(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        string temp = s;
        if(n != m)
        {
            return false;
        }
        for(int i = 0; i < n; i++)
        {
            temp =rotateByOne(temp);
           if(temp == goal)
           {
            return true;
           }
        }
        return false;
    }
};