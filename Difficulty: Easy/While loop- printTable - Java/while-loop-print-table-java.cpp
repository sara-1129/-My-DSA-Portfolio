//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void calculateMultiples(int n) {
        // code here
        int i = 10;
        while (i > 0)
        {
            cout << n * i << " ";
            i--;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int n;
    cin >> n; // Take input from user

    Solution solution;
    solution.calculateMultiples(n); // Call the function

    return 0;
}

// } Driver Code Ends