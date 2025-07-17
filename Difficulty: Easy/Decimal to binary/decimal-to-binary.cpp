class Solution {
  public:
    string decToBinary(int n) {
        // code here
        string ans;
        while(n != 0)
        {
            int digit = n % 2;
            char digits = digit + '0';
            ans.insert(0, 1, digits);
            n = n / 2;
        }
        return ans;
    }
};