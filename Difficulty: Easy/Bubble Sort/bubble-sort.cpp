//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        // Your code here
        
       int   n =arr.size();
       if (n == 1)
        {
            return;
        }
       

        for(int i = n-1; i>= 0 ;i--)
        {
             int count = 0;
            for(int j = 0; j < i ;j++)
            {
               
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    count++;
                   
                }
               }
                if(count == 0)
                {
                    return;
                }
            
        }
       
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
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

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends