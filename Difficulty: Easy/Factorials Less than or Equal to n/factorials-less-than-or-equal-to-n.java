//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long N = sc.nextLong();

            Solution ob = new Solution();
            ArrayList<Long> ans = ob.factorialNumbers(N);
            for (long num : ans) {
                System.out.print(num + " ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


// User function Template for Java
class Solution {
    
    static long factorial(long n){
    long fact = 1;
       if(n > 0){
         fact = n * factorial(n-1);
        
    }
    return fact;
    }
    static ArrayList<Long> factorialNumbers(long n) {
        // code here
        ArrayList<Long> ans = new ArrayList<Long>();
        for(long i = 1; i <= n ; i++ )
        {
            if(factorial(i) <= n)
            {
                ans.add(factorial(i));
            }
            else {
                break;
            }
        }
        return ans;
    }
}