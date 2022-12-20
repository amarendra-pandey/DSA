//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        
        int idx1=-1,idx2=-1,ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            if(a[i] == x){
                idx1=i;
                if(idx2 != -1)
                ans=min(ans, abs(idx1-idx2));
            } 
            if(a[i] == y){
                idx2=i;
                if(idx1 != -1)
                ans=min(ans, abs(idx1-idx2));
            }
        }
        
        if(idx1==-1 || idx2==-1) return -1;
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends