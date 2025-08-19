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
       vector <pair<double, int>> mp;
        for(int i = 0; i < n; i++)
        {
            double ratio = (double)(val[i])/ double(wt[i]);
            mp.push_back({ratio,wt[i]});
        }
         
        auto cmp = [] (const pair<double, int> & a,const pair<double, int> & b){
            return a.first > b.first;
        };
        sort(mp.begin(),mp.end(),cmp);
        
        for(auto it : mp)
        {
            if(usedCapacity <= 0)
            {
               break;
            }
            
            int taken = min(it.second, usedCapacity);
            ans = ans + (it.first * taken);
            usedCapacity -= taken;
                
        }
            return ans;
    }
};
