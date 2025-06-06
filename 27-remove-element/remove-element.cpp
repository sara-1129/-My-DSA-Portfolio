class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0, i = 0;
        int n = nums.size();
        for( i = 0; i < n; i++)
        {
            if (nums[i] != val) {
               nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};