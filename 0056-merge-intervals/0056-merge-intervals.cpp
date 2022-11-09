class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
        vector<vector<int>> v;
        sort(intervals.begin(), intervals.end());
        int j=0;
        
        v.push_back(intervals[0]);
        
        for(int i=1;i<intervals.size();i++){
            if(v[j][1] >= intervals[i][0]){
                if(v[j][1] < intervals[i][1])
                    v[j][1] = intervals[i][1];
            }
            else{
                v.push_back(intervals[i]);
                j++;
            }
        }
        
        return v;
    }
};