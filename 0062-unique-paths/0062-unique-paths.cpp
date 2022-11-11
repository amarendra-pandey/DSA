class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = m-1;
        double ans = 1;
        
        for(int i=1;i<=r;i++){
            ans = ans*(N-r+i)/i;
        }
        
        return (int)ans;
        
//         vector<int> dp(n,1);
        
//         for(int i=1;i<m;i++)
//             for(int j=1;j<n;j++)
//                 dp[j]+=dp[j-1];
        
//         return dp[n-1];
    }
};