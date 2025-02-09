class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPr = 0;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (min > prices[i])
            {
                min = prices[i];
            }
            maxPr = max(maxPr, prices[i] - min);
        } 
        return maxPr; 
    }
};