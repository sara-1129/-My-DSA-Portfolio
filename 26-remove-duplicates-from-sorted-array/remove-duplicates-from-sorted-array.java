class Solution {
    public int removeDuplicates(int[] nums) {
    TreeSet<Integer> hs = new TreeSet <Integer>();
        for(int i : nums)
        {
            hs.add(i);
        }
        int k = hs.size();
        int j = 0;
        for(int i : hs)
        {
            nums[j] = i;
            j++;
        }
       
        return k;
    }
}