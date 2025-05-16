class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i]==0)
            {
                cnt0++;
            }
            else if(nums[i]==1)
            {
                cnt1++;
            }
            else if(nums[i]==2)
            {
                cnt2++;
            }
        }
            for(int i = 0; i < cnt0; i++)
            {
                temp.push_back(0);
            }
            for(int i = 0; i < cnt1; i++)
            {
                temp.push_back(1);
            }
            for(int i = 0; i < cnt2; i++)
            {
                temp.push_back(2);
            }
            for(int i = 0; i < n; i++)
            {
                nums[i] = temp[i];
            }
        
    }
};