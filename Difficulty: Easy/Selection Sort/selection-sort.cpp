class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n - 1; i++)
        {
            int minIndex = i;
            for(int j = i + 1; j < n; j++)
            {
                if(arr[minIndex] > arr[j])
                {
                    minIndex = j;
                }
            }
            swap(arr[minIndex],arr[i]);
        }
        
    }
};