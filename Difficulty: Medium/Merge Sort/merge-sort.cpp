//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        vector <int> temp;
        if (l>=r)
        {
            return;
        }
        int mid =(l+r)/2;
        int low = l;
         int high = mid + 1;
         mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        while(low <= mid && high <= r)
        {
           if(arr[low] <= arr[high])
           {
               temp.push_back(arr[low]);
               low++;
           }
           else 
           {
              temp.push_back(arr[high]);
               high++; 
           }
        }
        while(low <= mid)
        {
            temp.push_back(arr[low]);
               low++;
        }
        while(high <= r)
        {
            temp.push_back(arr[high]);
               high++; 
        }
        
        
        
        for(int i = l; i<= r; i++)
        {
            arr[i] = temp[i-l];
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends