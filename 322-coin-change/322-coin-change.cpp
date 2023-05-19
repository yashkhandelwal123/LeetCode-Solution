class Solution {
public:
    // #define int long long;
    int dp[1000060];
//     int help(int st,vector<int>& coins, int amount ){
//         if(st> coins.size()-1){
//             return -1;
//         }
//         if(coins[st]>amount){
//             return 0;
//         }
        
//         int x = INT_MAX , y = INT_MAX;
//         if(coins[st]<=amount){
//             x = help(st, coins, (amount-coins[st]))+1;
//         }
//         else{
//             y = help(st+1, coins, amount);
//         }
        
//         return min(x,y);
        
        
        
        
//     }
    int help(vector<int>& coins, int amount){
        
        if(amount == 0)
            return 0;
        
        // if(ans == INT_MAX){
        //     return -1;
        // }
        
        if(dp[amount]!=-1){
            return dp[amount];
        }
        
        int ans = 1e9+7;
        for(int i = 0 ;i<coins.size(); i++){
            if(amount>=coins[i])
                ans = min(ans , 1+help(coins , amount-coins[i]));
        }
        
        if(ans == 1e9+7) 
            return  -1;
        
        
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        // return help(coins,amount);
        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
        
//         if(amount == 0)
//             return 0;
        
//         int ans = 1e9+7;
//         for(int i = 0 ;i<coins.size(); i++){
//             if(amount>=coins[i])
//                 ans = min(ans , 1+coinChange(coins , amount-coins[i]));
//         }
        
//         return ans;
//         sort(coins.begin() , coins.end());
        
//         reverse(coins.begin() , coins.end());
//         int count = 0;
//         for(int i = 0; i<coins.size(); i++){
//             if(amount>=coins[i]){
//                 while(amount!=0 && amount>=coins[i]){
//                     amount-=coins[i];
//                     count++;
//                 }
//             }
//         }
//         if( amount!=0){
//             return -1;
//         }
        
        
        // return help(0,coins,amount);
        
//         while(amount!=0){
            
//         }
        // return 0;
    }
};