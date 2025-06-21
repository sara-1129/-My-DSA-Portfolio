class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || n == 0) return 1;
        long long N = ( n < 0) ? (-(long long)n) : n;
        double base = x;
        double ans = 1;
        while(N != 0) {
            if(N % 2 == 0){
                N = N / 2;
                base = base * base;   
            }
            else {
                ans = ans * base;
                N--;
            }
        }
        if(n < 0) {
            ans = (double)(1.0)/ (double)(ans);
        }
        return ans;
    }
};