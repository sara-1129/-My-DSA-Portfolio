class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int cntZero = 0;
        long long product = 1;
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                cntZero++;
            }
            else
            {
                product *= nums[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(cntZero == n ||cntZero > 1 )
            {
                ans.push_back(0);
            }
            else if(cntZero == 1)
            {
                if(nums[i] == 0)
                {
                    ans.push_back(product);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {
                ans.push_back(product/nums[i]);
            }
        }

        return ans;
    }
};