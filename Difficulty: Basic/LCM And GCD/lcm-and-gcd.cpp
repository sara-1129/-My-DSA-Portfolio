//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
    
        int temp1 = a;
        int temp2 = b;
        
        vector<int> ans;
        
        int hcf = 1;
        while(temp1 > 0 && temp2 > 0)
        {
            if (temp1 > temp2)
            {
                temp1 = temp1 % temp2;
            }
            else if (temp2 > temp1)
            {
              temp2 = temp2 % temp1;   
            }
            else
            {
                hcf = temp1;
            }
        }
        
        if (temp1== 0)
        {
            hcf = temp2;
        }
        else{
            hcf = temp1;
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