class Solution {
    public int majorityElement(int[] nums) {
        HashMap <Integer,Integer> mp = new HashMap<>();
        int n = nums.length;
        for(int i = 0; i < n; i++)
        {
            mp.computeIfPresent(nums[i],(k,v) -> v+1);
            mp.computeIfAbsent(nums[i],(k) -> 1);
        }
        for (Integer num : mp.keySet())
        {
            if(mp.get(num) > n/2)
            {
                return num;
            }

        }
        return -1;
    }
}