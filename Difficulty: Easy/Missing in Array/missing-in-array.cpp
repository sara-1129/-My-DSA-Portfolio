class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size() + 1;
        int xor1 = n^(n-1);
        int xor2 = 0;
        for(int i = 0; i < n - 1; i++) {
            xor1 ^= i;
            xor2 ^= arr[i];
        }
        return xor1^xor2;
    }
};