class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int low = 1;
        int high = m;
        while(high >= low)
        {
            int mid = (low+high)/2;
            if(pow(mid,n) < m)
            {
                low = mid + 1;
            }
            else if(pow(mid,n) > m)
            {
                high = mid - 1;
            } 
            else {
                return mid;
            }
        }
        return -1;
    }
};