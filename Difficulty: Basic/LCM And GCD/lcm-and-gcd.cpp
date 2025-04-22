//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        if(a == b)
        {
            return {a,b};
        }
        int a1 = a;
        int b1 = b;
        int gcd = 1;
        while(a1 > 0 && b1 > 0)
        {
            if(a1 >= b1)
            {
                a1 = a1 % b1;
            }
            else if (a1 < b1)
            {
                b1 = b1 % a1;
            }
        }
        gcd = (a1 > 0)? a1:b1;
        int lcm = (a*b)/gcd;
        return {lcm, gcd};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends