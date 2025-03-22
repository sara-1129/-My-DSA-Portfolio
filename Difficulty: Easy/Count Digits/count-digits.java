//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.evenlyDivides(N));

            System.out.println("~");
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static int evenlyDivides(int n) {
        // code here
        int cnt = 0;
        int temp = n;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit == 0)
            {
                temp = temp / 10;
                continue;
            }
            if (n % digit == 0)
            {
                cnt++;
            }
            temp = temp / 10;
        }
        return cnt;
    }
}