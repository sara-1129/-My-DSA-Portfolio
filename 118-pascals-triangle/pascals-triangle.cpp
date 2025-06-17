class Solution {
public:
    vector <int> nthPascalRow (int row) {
        int n = row - 1;
        vector <int> temp ={1};
        int nCr = 1;
        for(int col = 1; col <= n; col++) {
            nCr = nCr *(n-col+1)/col;
            temp.push_back(nCr);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <=numRows; i++) {
            vector<int>temp = nthPascalRow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};