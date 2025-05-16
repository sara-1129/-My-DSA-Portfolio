//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        
        int n = arr.size();
        int low =0;
        int high = n-1;
        int mid  = 0;
        while(high >= mid)
        {
            if(arr[mid] == 0)
            {
                int temp = arr[mid];
                arr[mid]= arr[low];
                arr[low] =temp;
                mid++;
                low++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else if(arr[mid] == 2)
            {
                int temp = arr[mid];
                arr[mid]= arr[high];
                arr[high] =temp;
                high--;
            }
        }
        
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends