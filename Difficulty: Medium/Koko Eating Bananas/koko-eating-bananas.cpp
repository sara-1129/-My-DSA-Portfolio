class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());
        int high = maxi;
        int low = 1;
        int ans = 0;
        while(high >= low) {
            int mid = (low + high)/2;
            int sum = 0;
            for(int j = 0; j < n; j++) {
                sum += ceil((double)arr[j]/(double)mid);
            }
            if(sum <= k) {
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};