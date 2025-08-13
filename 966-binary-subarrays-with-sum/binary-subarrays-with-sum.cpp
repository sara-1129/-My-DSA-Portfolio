class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        unordered_map<int ,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[sum]++;
            sum += nums[i];
            if(mp.find(sum - k) != mp.end())
            {
                cnt = cnt + mp[sum - k];
            }
           
        }
        return cnt;
    }
};