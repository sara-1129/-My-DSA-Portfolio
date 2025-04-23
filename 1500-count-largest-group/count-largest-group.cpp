class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        int cnt = 0;
        int maxi = 0;
        for(int i = 1; i <= n; i++)
        {
            int temp = i;
            int sum = 0;
            while(temp > 0)
            {
                int digit = temp % 10;
                sum = sum + digit;
                temp = temp/10;
            }
            mp[sum]++;
            maxi = max(maxi,mp[sum]);
        }
        for(auto it :mp)
        {
            if(it.second == maxi)
            {
                cnt++;
            }
        }
        return cnt;
    }
};