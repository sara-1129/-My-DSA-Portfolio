class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp = n;
        long long cnt = 0;
        while(temp > 0)
        {
            if((temp & 1 ) == 1)
            {
                cnt++;
            }
            temp = temp >> 1;
        }

        return (cnt == 1)? true:false;
    }
};