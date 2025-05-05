//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        vector<int> ans;
        int n = arr.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i< n; i++)
        {
            if(arr[i] == 0)
            {
                cnt0++;
            }
            else if(arr[i] == 1)
            {
                cnt1++;
            }
            else if(arr[i] == 2)
            {
                cnt2++;
            }
        }
        for(int i = 0; i < cnt0; i++)
        {
            ans.push_back(0);
        }
         for(int i = 0; i < cnt1; i++)
        {
            ans.push_back(1);
        }
         for(int i = 0; i < cnt2; i++)
        {
            ans.push_back(2);
        }
         for(int i = 0; i < n; i++)
        {
            arr[i] = ans[i];
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