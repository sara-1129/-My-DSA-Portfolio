class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> expected;
        for (int i = 0; i < n-1; i++)
        {
            if(nums[i] < nums[i+1])
            {
                expected.push_back(nums[i]);
            }
        }
        
        expected.push_back(nums[n-1]);
        int k = expected.size();
        nums.erase(nums.begin(),nums.end());
        for (int i = 0; i < k; i++)
        {
           nums.push_back(expected[i]);
        }
        
        
        return k;
        
    }
};