class Solution {
  public:
    int setBit(int n) {
        // Write Your Code here
        int mask = 1;
        int temp = n;
        while((temp & 1) != 0)
        {
            mask = mask << 1;
            temp = temp >> 1;
        }
        
        return mask | n;
    }
};