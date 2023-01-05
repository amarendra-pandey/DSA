
bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),cmp);
        
        int ans=0,x=0;
        
        for(int i=0;i<p.size();i++){
            if(ans==0 || x<p[i][0]){
                ans++;
                x=p[i][1];
            }
        }
        
        return ans;
    }
};