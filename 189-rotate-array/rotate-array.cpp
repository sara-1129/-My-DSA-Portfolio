class Solution {
public:
    void Reverse(vector<int>& arr,int start,int end)
    {
        while(start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end --;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        
        k =k % n;
        Reverse(nums,0,n-1);
        Reverse(nums,0,k-1);

        Reverse(nums,k,n-1);

        
    }
};