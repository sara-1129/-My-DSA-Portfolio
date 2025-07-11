class Solution {
public:
    int mySqrt(int x) {
        long long root = 0;
        for(long long i = 1; i*i <= x; i++)
        {
            root = i;
        }
        return root;
    }
};