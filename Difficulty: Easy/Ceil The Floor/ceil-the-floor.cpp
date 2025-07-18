//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int flr = -1;
        int cil = -1;
        int lowf = 0;
        int highf = arr.size() - 1;
        int lowc = 0;
        int highc = arr.size() - 1;
        while(lowf <= highf)
        {
            int midf = (lowf + highf)/2;
            if(arr[midf] <= x)
            {
                flr = arr[midf];
                lowf = midf + 1;
            }
            else{
                highf = midf - 1;
            }
        }
        while(lowc <= highc)
        {
            int midc = (lowc + highc)/2;
            if(arr[midc] >= x)
            {
                cil =arr[midc] ;
               highc = midc - 1;
            }
            else{
                lowc = midc + 1;
            }
        }
        return {flr,cil};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends