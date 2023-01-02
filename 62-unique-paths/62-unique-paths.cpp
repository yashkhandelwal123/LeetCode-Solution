class Solution {
public:
    int dp[101][101];
    int help(int m, int n){
        if(m == 1 || n == 1){
            return 1;
        }
        
        
        if(dp[m][n] != -1){
            return dp[m][n];
        }
        
        dp[m-1][n] = help(m-1, n);
        dp[m][n-1] = help(m,n-1);
        
        
        return dp[m][n] = dp[m-1][n] +dp[m][n-1];
        
    }
    int uniquePaths(int m, int n) {
        
        for(int i = 1; i<=100; i++){
            for(int j = 1; j<=100; j++){
                dp[i][j] = -1;
            }
        }
        // int dp[m][n];
        
        int ans = help(m,n);
        return ans;
        
        
    }
};