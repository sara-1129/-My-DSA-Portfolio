class Solution {
    public boolean isPalindrome(int x) {
        if (x == 0)
        {
            return true;
        }
        else if(x < 0)
        {
            return false;
        }
        int temp = x;
        int ans  = 0;
        while(temp > 0)
        {
            int digit = temp % 10;
            if(ans < Integer.MIN_VALUE/10 || ans >Integer.MAX_VALUE/10)
            {
                return false;
            }
            ans = ans*10 + digit;
            temp = temp /10;
        }
        if (ans == x)
        {
            return true;
        }
        return false;

    }
}