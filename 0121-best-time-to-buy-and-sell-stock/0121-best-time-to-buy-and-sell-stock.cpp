class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size(),res=0,mx=prices[n-1]; 
        
        for(int i=n-2;i>=0;i--){
            if(prices[i]<mx)
                res=max(res,mx-prices[i]);
                mx=max(prices[i],mx);
            
        }        
        
        return res;                 
    }
};