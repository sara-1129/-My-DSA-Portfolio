class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int ans = 0;
        int n = b.length();
        for(int i = 0; i < n; i++)
        {
            int digit = b[n - 1 - i] - '0';
            ans  =  pow(2, i) * digit + ans;
        }
        return ans;
    }
};