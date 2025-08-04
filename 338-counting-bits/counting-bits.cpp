class Solution {

public:
    int countBitsIn(int n)
    {
        
        int cnt = 0;
        while(n > 0)
        {
            if((n & 1) == 1)
            {
                cnt++;
            }
            n = n >> 1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i = 0; i <= n; i++)
        {
            ans.push_back(countBitsIn(i));
        }
        return ans;
    }
};