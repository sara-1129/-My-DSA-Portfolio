class Solution {
  public:
        void sorting(vector<int>& arr, int high) {
            
            for(int j = 0; j < high; j++) {
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
            for(int i = n - 1; i > 0; i--) {
                sorting(arr, i);
            }
        
    }
};