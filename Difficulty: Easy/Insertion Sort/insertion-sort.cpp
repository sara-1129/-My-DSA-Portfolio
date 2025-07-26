class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n  = arr.size();
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(arr[i] > arr[j] )
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
};