class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(), nums.end());
        int maxlen = 1;
        int lastsmall = INT_MIN;
        int len = 1;
        for(auto it : nums ) {
            if(it == lastsmall + 1) {
                lastsmall++;
                len++;
                maxlen = max(len, maxlen);
            }
            else if(it != lastsmall) {
                len = 1;
                lastsmall = it;
            }
        }
        return maxlen;
    }
};