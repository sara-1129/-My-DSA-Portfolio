class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();// gives number of rows 

        for(int i = 0 ; i < n - 1; i++) //get transpose
        {  
            for(int j = i + 1; j < n; j++) 
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0 ; i < n; i++)//reverse rows
        {   
             reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};