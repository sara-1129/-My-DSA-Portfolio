class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int rotations = 0;
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                rotations = i + 1;
            }
        }
        return rotations;
    }
};
