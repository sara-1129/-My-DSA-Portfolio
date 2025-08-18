// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
        int n = val.size();
        double ans = 0;
        int usedCapacity = capacity;
       vector <pair<double, double>> mp;
        for(int i = 0; i < n; i++)
        {
            double ratio = (double)(val[i])/ double(wt[i]);
            mp.push_back({ratio,wt[i]});
        }
         
        auto cmp = [] (const pair<double, double> & a,const pair<double, double> & b){
            return a.first > b.first;
        };
        sort(mp.begin(),mp.end(),cmp);
        
        for(auto it : mp)
        {
            if(usedCapacity - it.second>= 0)
            {
                usedCapacity -= it.second;
                ans = ans + (it.first * it.second);
            }
            else
            {
                ans = ans + (it.first * usedCapacity);
                usedCapacity = 0;
                
            }
            if(usedCapacity == 0)break;
        }
            return ans;
    }
};
