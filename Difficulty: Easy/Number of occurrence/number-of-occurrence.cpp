class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int cnt = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == target)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
