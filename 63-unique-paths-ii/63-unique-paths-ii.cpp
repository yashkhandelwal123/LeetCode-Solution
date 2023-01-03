class Solution {
public:
//     int dp[101][101];
//     int help(vector<vector<int>>& obstacleGrid,int n,int m){
//         if(m == obstacleGrid.size()-1 && n == obstacleGrid[0].size()-1){
//             return 1;
//         }
//         if(dp[n][m]!=-1){
//             return dp[n][m];
//         }
//         if(obstacleGrid[n][m] == 1){
//             return 0;
//         }
        
//         int ans = 0;
//         if(m<obstacleGrid.size()-1){
//             dp[n][m+1] = help(obstacleGrid,n,m+1);
            
//         }
//         int y = 0;
//         if(n>obstacleGrid[0].size()-1){
//             dp[n+1][m] = help(obstacleGrid,n+1,m);
//         }
        
//         return dp[n][m] = dp[n+1][m] + dp[n][m+1];
//     }
    //     int solve(vector<vector<int>>& grid, int i, int j) {
    //     if(i < 0 || j < 0 || i >= m || j >= n) return 0;    // bounds checking
    //     if(grid[i][j]) return dp[i][j] = 0;                 // obstacle found at current cell
    //     if(i == m - 1 && j == n - 1) return 1;              // reached bottom-right of grid ? return 1
    //     if(dp[i][j]) return dp[i][j];                       // if already computed for current cell, just return the stored results
    //     return dp[i][j] = solve(grid, i + 1, j) + solve(grid, i, j + 1); // recursively explore the two options available with us
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size() , n = obstacleGrid[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        dp[0][1] = 1;
        for(int i = 1 ; i <= m ; ++i)
            for(int j = 1 ; j <= n ; ++j)
                if(!obstacleGrid[i-1][j-1])
				//2 way is possible go right or down
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
        return dp[m][n];
    }
};