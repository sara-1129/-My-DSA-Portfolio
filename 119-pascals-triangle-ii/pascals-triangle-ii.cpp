class Solution {
public:
    
       

    vector<int> getRow(int rowIndex) {
        vector <int> row = {1};
        long long ans = 1;
       for(int i = 0; i < rowIndex; i++) {
            ans = ans * ( rowIndex - i )/(i+1);
            row.push_back(ans);
       }
       return row;
    }

};