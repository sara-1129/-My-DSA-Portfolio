class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> store;
        int j = 0;
        for(int i = 1; j < n; i++)
        {
            if(arr[j] != i)
            {
                store.push_back(i);
            }
            else {
                j++;
            }
        }
        store.push_back(arr[n-1]+1);
        int m = store.size();
        int ans;
        if(k <= m)
        {
            ans = store[k-1];
        }
        else {
            ans = store[m-1] + k - m;
        }
        return ans;
    }
};