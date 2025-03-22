//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while (t-- > 0) {

            int a;
            a = Integer.parseInt(br.readLine());

            int b;
            b = Integer.parseInt(br.readLine());

            Solution obj = new Solution();
            int[] ans = obj.lcmAndGcd(a, b);
            System.out.println(ans[0] + " " + ans[1]);
            System.out.println("~");
        }
    }
}


// } Driver Code Ends


// User function Template for Java

class Solution {
    public static int[] lcmAndGcd(int a, int b) {
        // code here
        int hcf = 1;
        int temp1 = a;
        int temp2 = b;
        
        while(temp1 > 0 && temp2 > 0)
        {
            if(temp1 > temp2)
            {
                temp1 = temp1 % temp2;
            }
            else if(temp2 > temp1)
            {
                temp2 = temp2 % temp1;
            }
        }
        if(temp1 == 0)
        {
            hcf =temp2;
        }
        else{
            hcf = temp1;
        }
        
        int lcm = (a*b)/hcf;
        int[] ans = {lcm,hcf};
        return ans;
    }
    
}


//{ Driver Code Starts.

// } Driver Code Ends