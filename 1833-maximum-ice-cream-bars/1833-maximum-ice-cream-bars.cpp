class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        
        int ans=0;
        if(coins<costs[0]) return 0;
        
        for(int i=0;i<costs.size();i++){
            if(coins<costs[i])
                break;
            coins-=costs[i];
            ans++;
        }
        return ans;
    }
};