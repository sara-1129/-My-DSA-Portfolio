class Solution {
    public int missingNumber(int[] nums) {
       int n = nums.length;
      ArrayList <Integer> ans = new ArrayList <> (n+1);
      for (int i = 0; i <= n; i++) {
            ans.add(0);
        }
      for (int i = 0; i < n; i++)
      {
        ans.set(nums[i],1);
      }
      for (int i = 0; i < ans.size(); i++)
      {
        if(ans.get(i) == 0)
        {
            return i;
        }
      }
      return -1;
    }

}