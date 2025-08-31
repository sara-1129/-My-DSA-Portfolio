class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns
        int row = -1;
        for(int i = 0; i < m - 1; i++)
        {
            if(matrix[i][0] <= target && matrix[i + 1][0] > target)
            {
                row =  i;
                break;
            }
        }
        row = (row == -1)? (m - 1):row;
       
            for(int j = 0; j < n; j++)
            {
                if(matrix[row][j] == target)return true;
            }
       
        return  false;
    }
};