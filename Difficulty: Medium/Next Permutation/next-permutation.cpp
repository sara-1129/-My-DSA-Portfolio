//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
       
        int pivotIndex = -1;
        int rightGreatIndex = 0;
        
        for (int i = n-2; i >= 0; i--)
        {
            if (arr[i] < arr [i+1])
            {
                pivotIndex = i;
                break;
            }
        }
        if (pivotIndex == -1)
        {
            sort(arr.begin(),arr.end());
        }
        else
        {
            for (int i = n-1; i > pivotIndex; i--)
            {
                if (arr[i] > arr[pivotIndex])
                {
                    rightGreatIndex = i;
                    break;
                }
            }
            swap(arr[rightGreatIndex],arr[pivotIndex]);
            
            sort (arr.begin()+pivotIndex+1,arr.end());
            
        }
            
            
        
        
        
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
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends