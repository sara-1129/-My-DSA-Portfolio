class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
       int n = arr.size();
       int idx = -1;
       for(int i = n - 1; i >= 0; i--) 
       {
           if(arr[i] <= x)
           {
               idx = i;
               break;
           }
       }
        return idx;
    }
   
};
