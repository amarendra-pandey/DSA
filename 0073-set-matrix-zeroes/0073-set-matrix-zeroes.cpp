class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        
        if(v.size()){
            int n1=v.size();
            
            for(int i=0;i<n1;i++){
                int r=0,c=0;
                
                while(r<n){
                    mat[r][v[i][1]]=0;
                    r++;
                }
                while(c<m){
                    mat[v[i][0]][c]=0;
                    c++;
                }
            }
        }        

    }
};