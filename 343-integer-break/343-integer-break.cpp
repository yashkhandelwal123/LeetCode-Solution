class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(100);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 2;
        for(int i = 4; i<=n; i++){
            for(int j = 1;j <i; j++){
                int x = j;
                int y = i-j;
                dp[i] = max({x*y , dp[x]*dp[y], dp[x]*y,dp[y]*x ,dp[i]});
            }
        }
        return dp[n];
    }
};