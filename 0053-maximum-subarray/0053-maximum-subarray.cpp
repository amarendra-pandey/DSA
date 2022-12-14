class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        int sum=nums[0],maxsum=nums[0];
        
        for(int i=1;i<n;i++){
            if(sum>=0)
                sum+=nums[i];
            else
                sum=nums[i];
            
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};