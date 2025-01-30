class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expected ;
        int n =nums.size();
        for(int i = 0 ; i < n-1; i++)
        {
            if (nums[i] < nums[i+1])
            {
                expected.push_back(nums[i]);
            }
        }
        expected.push_back(nums[n-1]);
        nums.clear();
        int k = expected.size();
        for(int i = 0 ; i< k; i++)
        {
            nums.push_back(expected[i]);
        }
        return k;
        
    }
};