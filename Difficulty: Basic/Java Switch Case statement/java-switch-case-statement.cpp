//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        const double pi = 3.1415926535897932;
         float R,L,B;
         double area;
        switch (choice)
        {
            case 1:
            R =arr [0];
            if (R >=1 && R<=100){
                area =pi*R*R;
            return area;}
            
            break;
            case 2:
            L = arr[0];
            B = arr[1];
            if(L,B <=100 && L,B>=1){
                area = L*B;
                return area;
            }
            
        }
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);
        
        
        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);
        // cout<<fixed<<endl;
        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;
        // 
        // }else{
            cout<<res<<endl;
        // }
        
    }
}

// } Driver Code Ends