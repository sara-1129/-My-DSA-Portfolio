class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int rev = 0;
        while(temp != 0)
        {
            int digit = temp % 10;
        if (rev < pow(-2,31)/10 || rev > (pow(2,31)-1)/10)
        {
            return 0;
        }
            rev = rev*10+digit;
            temp = temp/10;


        }
        
      
       return rev;
    }
};