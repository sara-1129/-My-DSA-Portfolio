class Solution {
  public:
    void printNos(int n , int i = 1) {
        // Code here
        if(i > n) return;
        cout << i << " ";
        printNos(n, i+1);
        
    }
};