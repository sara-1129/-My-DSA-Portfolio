class Solution {
public:
    int sumByDiv(vector<int> & nums,int div)
    {
        int sum = 0;
        int n = nums.size();
        for(int j = 0; j < n; j++)
            {
                sum += ceil((double)(nums[j])/(double)(div));
            }
            return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(),nums.end());
        int low = 1;
        int high = maxi;
        int ans  = -1;
        while(high >= low)
        {
            int mid = (low + high)/2;
            int res = sumByDiv(nums,mid);
            if(res > threshold)
            {
                low = mid + 1;
            }
            else if(res <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};