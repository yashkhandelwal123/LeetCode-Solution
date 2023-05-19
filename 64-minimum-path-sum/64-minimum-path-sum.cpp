#include<bits/stdc++.h>
class Solution {
public:
    int dp[210][210];
    int minhelp(vector<vector<int>> &v, int sr, int sc , int n, int m){
        if(sr == n-1 && sc == m-1){
            return v[sr][sc];
        }
        if(sr>=n || sc>=m){
            return 1000;
        }
        if(dp[sr][sc] != -1){
            return dp[sr][sc];
        }
        
        int x = minhelp(v , sr+1, sc ,n,m);
        int y = minhelp(v , sr, sc+1,n,m);
        // int z = minhelp(v , sr+1, sc+1,n,m);
        int ans= v[sr][sc] + min(x,y);
        return dp[sr][sc] = ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        // cout<<grid.size()<<grid[0].size()<<endl;
        memset(dp,-1,sizeof(dp));
        
        int ans = minhelp(grid , 0 , 0 , grid.size() , grid[0].size());
        return ans;
    }
};