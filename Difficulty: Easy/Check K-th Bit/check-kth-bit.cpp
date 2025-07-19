class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int temp = n;
        if((n >> k) & 1 != 0)
        {
            return true;
        }
        return false;
    }
};