class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
//         int n1=-1,n2=-1,c1=0,c2=0;
        
//         for(int x: nums){
//             if(x==n1) c1++;
//             else if(x==n2) c2++;
//             else if(c1==0){
//                 n1=x;
//                 c1=1;
//             }
//             else if(c2==0){
//                 n2=x;
//                 c2=1;
//             }
//             else{
//                 c1--;
//                 c2--;
//             }
//         }
        
//         c1=c2=0;
//         for(int x: nums){
//             if(x==n1) c1++;
//             else if(x==n2) c2++;
//         }
        
//         if(c1>(n/3)) v.push_back(n1);
//         if(c2>(n/3)) v.push_back(n2);
        
//         return v;
        
        
        unordered_map<int,int> mp;
        
        for(auto x: nums){
            mp[x]++;
        }
        
        for(auto x: mp){
            if(x.second > n/3)
                v.push_back(x.first);
        }
        return v;
    }
};