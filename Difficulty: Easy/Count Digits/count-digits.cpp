class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp = n;
        int cnt = 0;
        while (temp > 0) {
            int divisor = temp % 10;
            if(divisor == 0)
            {
               temp = temp / 10; 
               continue;
            }
            if(n % divisor == 0)cnt++;
            temp = temp / 10;
        }
        return cnt;
    }
};