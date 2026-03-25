// User function template for C++
class Solution {
  public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int k, vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int maxFre = 0;
        int maxEle = -1;
        
        for(auto it : mp){
            if(it.second > maxFre){
                maxFre = it.second;
                maxEle = it.first;
            } 
            else if(it.second == maxFre && it.first < maxEle ) {
                maxEle = it.first;
            }
        }
        return maxEle;
    }
};