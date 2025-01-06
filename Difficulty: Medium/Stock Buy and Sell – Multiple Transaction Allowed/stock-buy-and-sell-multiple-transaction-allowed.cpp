//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int locMin=prices[0];
        int locMax = prices[0];
        int result = 0;
        int i = 0;
        while(i<n-1)
        {
           while( i<n-1 && prices[i] >= prices[i+1])
           {
               i++;
           }
           locMin = prices[i];
           
           
            while( i<n-1 && prices[i] <= prices[i+1])
           {
               i++;
           }
           locMax = prices[i];
           result = result +(locMax -locMin);
           
        }
        return result;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends