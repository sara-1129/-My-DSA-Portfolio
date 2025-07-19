class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
        int temp = num;
        int ithBit = 1 & (temp >> i - 1);
        int ithSet;
        int ithUnset;
        if(ithBit == 1)
        {
            ithSet = num;
            ithUnset = (1 << i - 1) ^ temp;
        }
        else
        {
            ithUnset = num;
            ithSet = (1 << i - 1) ^ temp;
        }
        
        cout << ithBit << " " <<  ithSet << " " <<  ithUnset;
    }
};