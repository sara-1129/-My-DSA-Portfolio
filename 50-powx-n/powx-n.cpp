class Solution {
public:
    
    double myPowPositive(double x, int n) {
      long long N = (n < 0) ?(-(long long) n): n;
      
        if(N == 0) {
            return 1;
        }  
        if(N % 2 == 0) {
            return myPow(x*x, N/2);
        }
        else {
            return x*myPow(x*x,N/2);
        }
    }
    
    double myPow(double x, int n) {
      double ans = myPowPositive(x,n);
      if(n < 0) {
        ans = 1/ans;
      }
      return ans;
    }
};