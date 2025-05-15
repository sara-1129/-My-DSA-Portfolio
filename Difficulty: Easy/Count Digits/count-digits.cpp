//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int temp = n;
        int cnt = 0;
        while(temp > 0)
        {
            int digit = temp % 10;
            if(digit==0)
            {
                temp = temp / 10;
                continue;
            }
            if(n %digit == 0)
            {
                cnt++;
            }
            temp = temp / 10;
        }
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends