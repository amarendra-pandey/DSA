class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count=0;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        for(auto x: mp){
            if(x.second==1)
                return -1;
            if(x.second%3==0){
                count += x.second/3;
            }
            else{
                count += x.second/3 + 1;
            }
        }
        
        return count;
    }
};                                 