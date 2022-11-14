class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end());
        int ans=0;
        
        for(auto  x: nums){
            if(s.find(x-1)!=s.end()) continue;
            
            int j=1;
            while(s.find(x+j)!=s.end()) j++;
            ans=max(ans,j);
        }
        return ans;
    }
};