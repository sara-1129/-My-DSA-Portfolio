//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n =arr.size();
        int count1=0 , count2 = 0;
        int ele1=0, ele2 = 0;
        for(auto ele :arr)
        {
            if (ele1 == ele)
            {
                count1++;
            }
            else if(ele2 == ele)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                ele1 = ele;
                count1++;
            }
            else if (count2 == 0)
            {
                ele2 = ele;
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector <int> res;
        count1 = 0;
        count2 = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (ele1 == arr[i])
            {
                count1++;
            }
             if (ele2 == arr[i] )
            {
                count2++;
            }
        }
        if(count1 > n/3)
        {
            res.push_back(ele1);
        }
        if(count2 > n/3 && ele2 != ele1)
        {
            res.push_back(ele2);
        }
        
       sort(res.begin(),res.end());
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends