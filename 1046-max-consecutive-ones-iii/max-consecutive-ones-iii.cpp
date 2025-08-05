class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n = nums.size();
      int l = 0;
      int r = 0;
      int cntZero = 0;
      int i = 0;
      int maxlen = 0;
      vector <int> arr;
      while(r < n)
      {
        if(nums[r] == 0)
        {
            arr.push_back(r);
            cntZero++;
        }
        if(cntZero > k)
        {
            l = arr[i] + 1;
            i++;
            cntZero--;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
      }
      return maxlen;
    }
};