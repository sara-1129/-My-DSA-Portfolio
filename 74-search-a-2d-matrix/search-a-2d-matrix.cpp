class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == target) {
                    return true;
                }
                else if(matrix[i][j] > target)
                {
                    return false;
                }
            }
        }
        return  false;
    }
};