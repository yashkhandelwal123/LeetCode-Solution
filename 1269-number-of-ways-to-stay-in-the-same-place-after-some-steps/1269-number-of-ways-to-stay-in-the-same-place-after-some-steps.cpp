class Solution {
    int mod = 1e9 +7;
    int dp[505][10001];
    int rec(int s ,int pos,int steps, int arrLen){
        if(pos<0 || pos>=arrLen) return 0;
        if(s == steps){
            if(pos == 0) return 1;
            else return 0;
        }
        if(dp[s][pos] != -1){
            return dp[s][pos];
        }
        long long ans = 0;
        ans+=rec(s+1, pos+1,steps,arrLen)%mod;
        ans+=rec(s+1, pos-1,steps,arrLen)%mod;
        ans+=rec(s+1, pos,steps,arrLen)%mod;
        
        return dp[s][pos] = ans%mod;
    }
public:
    int numWays(int steps, int arrLen) {
        memset(dp,-1,sizeof(dp));
        return rec(0,0,steps,arrLen);
    }
};