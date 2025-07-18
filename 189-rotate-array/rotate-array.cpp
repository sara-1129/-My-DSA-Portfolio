class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0)
        {
            return;
        }
        int n = nums.size();
        vector <int> temp;
        k = k % n;
        
        for(int i = n-k; i < n; i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < n-k; i++)
        {
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < n; i++)
        {
            nums[i] = temp[i];
        }
    }
};