class Solution {
  public:
    vector<int> convertBinary(int n )
    {
        vector<int> ans;
        while(n > 0)
        {
            int digit = n % 2;
            ans.push_back(digit);
            n = n / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    bool checkKthBit(int n, int k) {
        //  code here
        vector <int> ans = convertBinary(n);
        int m = ans.size();
        if(k > m - 1)
        {
            return false;
        }
        if(ans[m - 1 - k] == 1)
        {
            return true;
        }
        return false;
        
    }
};