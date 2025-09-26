class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        set<int> temp;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            int cnt = 1;
            for(int j = i + 1; j < n; j++) {
                if(nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if(cnt > n/3)temp.insert(nums[i]);
        }
        for(auto it :temp) {
            ans.push_back(it);
        }
        return ans;
    }
};