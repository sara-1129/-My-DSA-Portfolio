class Solution {
    public int reverse(int x) {
        int ans = 0;
        int temp = x;
        while(temp != 0)
        {
            int digit = temp % 10;
            

            if(ans < Integer.MIN_VALUE/10 || ans > Integer.MAX_VALUE/10)
            {
                return 0; 
            } 
            ans = ans * 10 + digit;
            temp = temp /10;
        }
        return ans;
    }
}