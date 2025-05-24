class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int ans = -1;
        for(int i = 0; pow(i,n) <= m; i++)
        {
            if(pow(i,n) == m)
            {
                ans = i;
            }
        }
        return ans;
    }
};