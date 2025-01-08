class Solution {
public:
    int fib(int n) {
        int first = 0;
        int second = 1;
        int answer = 0;
        if (n > 1)
        {
         for (int i = 2; i<=n ; i++)
        {
            answer = first + second;
            first = second;
            second = answer;
        }
        }
        else if (n == 1)
        {
            return 1 ;
        }
        
        
       
       
        
        return answer;
        

        
    }
};