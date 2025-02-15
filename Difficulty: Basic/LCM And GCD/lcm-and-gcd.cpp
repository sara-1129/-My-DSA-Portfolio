//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
    
        
        
        vector<int> ans;
        
        int hcf = 0;
        for(int i =  min(a,b); i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                hcf = i;
                break;
            }
        }
        
        int lcm = (a*b)/hcf;
        ans.push_back(lcm);
        ans.push_back(hcf);
        return ans;
        
        
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