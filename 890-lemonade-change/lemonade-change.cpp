class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        if(bills[0] != 5)return false;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[bills[i]]++;
            if(bills[i] == 10)
            {
                if(mp[5] <= 0)return false;
                mp[5]--;
            }
            else if(bills[i] == 20)
            {
                if(mp[10] <= 0)
                {
                    if(mp[5] < 3)return false;
                    mp[5] -= 3;
                }
                else
                {
                    if(mp[5] <= 0)return false;
                    mp[5]--;
                    mp[10]--;
                }

            }
        }
        return true;
    }
};