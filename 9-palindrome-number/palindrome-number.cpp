class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
 {
    return false;
 } 
    int temp = x;
    int ans = 0;
    if (x == 0)
    {
        return true;
    }

    while (temp != 0)
    {
        int digit = temp % 10;
        if(ans>(INT_MAX)/10 || ans<(INT_MIN)/10){
                return false;
            }
        ans = ans * 10 + digit;
        temp = temp / 10;
    }
    if (ans == x)
    {
        return true;
    }
    return false;
 

    }
};