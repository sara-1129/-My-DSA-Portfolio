class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long total = 0;
        int maxi = 0;
        for(int m : milestones)
        {
            total += m;
            maxi = max(maxi, m);
        }

        long long rest = total - maxi;
        if(rest >= maxi - 1)
        {
            return total;
        }
        return (long long)2 * rest + 1; 
    }
};