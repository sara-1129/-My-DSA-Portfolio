class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        int k = st.size();
        int i = 0;
        for(auto it:st){
            nums[i] = it;
            i++;
        }
        return k;
    }
};