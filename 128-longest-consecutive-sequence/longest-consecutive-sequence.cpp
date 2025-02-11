class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set <int> ans;
        if (n == 0)
        {
            return 0;
        }
        int longest  = 1;
       
        for (int i = 0; i < n; i++)
        {
            ans.insert(nums[i]);
        }
        for(auto it : ans)
        {
            if (ans.find(it - 1) == ans.end())
            {
                int cnt  = 1;
                int x  = it;

                while (ans.find(x+1) != ans.end())
                {
                    cnt++;
                    x++;
                }
                if (cnt > longest)
            {
                longest = cnt;
            }
            }
            
        }
    return longest;
        
    }
};