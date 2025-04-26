class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
        {
            return false;
        }
        else if(x == 0)
        {
            return true;
        }
        else {
            int temp = x;
            int rev = 0;
            while(temp > 0)
            {
                int digit = temp % 10;
                if(rev < pow(-2,31)/10 ||rev >(pow(2,31)-1)/10)
                {
                    return false;
                }
                rev = rev * 10 +digit;
                temp = temp / 10;
            }
            if(x == rev)
            {
                return true;
            }
        }
        return false;
    }
};