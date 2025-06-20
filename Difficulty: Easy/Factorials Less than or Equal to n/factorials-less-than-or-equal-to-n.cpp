// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long factorial =  1;
        vector<long long> ans;
        int i = 2;
        while(factorial <= n) {
            ans.push_back(factorial);
            factorial = factorial * i;
            i++;
        }
        return ans;
    }
};