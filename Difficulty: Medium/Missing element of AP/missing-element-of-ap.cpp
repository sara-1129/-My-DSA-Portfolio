// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int d = (arr[0] > arr[1]) ? -((2*pow(10,7))+1):((2*pow(10,7))+1);
        for(int i = 0; i < n-1; i++)
        {
            int diff = arr[i+1] - arr[i];
            if(arr[i+1] >= arr[i]){
                d = (d < diff)?d:diff;
            }
            else {
                d = (d > diff)?d:diff;
            }
            
        }
        int ans = arr[n-1] + d;
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i+1]-arr[i] != d)
            {
                ans = arr[i] + d;
            }
        }
        return ans;
    }
};