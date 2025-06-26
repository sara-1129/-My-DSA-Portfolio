class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n  = arr.size();
        vector<int> temp;
        d = d % n;
        for(int i = d; i < n; i++)
        {
            temp.push_back(arr[i]);
        }
        for(int i = 0; i < d; i++) {
            temp.push_back(arr[i]);
        }
        
        for(int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
};