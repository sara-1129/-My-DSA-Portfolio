class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element =INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                element = nums[i];
            }
            if (nums[i] == element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        int check = 0;
        for (int i = 0 ; i < nums.size(); i++)
        {
            if (element == nums[i])
            {
                check++;
            }
        }
        if (check > nums.size()/2)
        {
            return element;
        }
        return -1;
    }
};