class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largestEle = pow(-2,31);
        for(int i = 0; i < n; i++) {
            largestEle = max(arr[i],largestEle);
            
        }
        return largestEle;
    }
};
