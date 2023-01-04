class Solution {
public:
//     int solve(int i1, string &s1, int i2, string &s2, vector<vector<int>> &dp)
//     {
//         if(i1<0 or i2<0)
//             return 0;
//         if(dp[i1][i2]!=-1)
//             return dp[i1][i2];
//         if(s1[i1]==s2[i2])
//             return dp[i1][i2] = 1 + solve(i1-1,s1,i2-1,s2,dp);
//         else
//             return dp[i1][i2] = max(solve(i1-1,s1,i2,s2,dp),solve(i1,s1,i2-1,s2,dp));
//     }

//     int longestCommonSubsequence(string text1, string text2) {
//         int n1 = text1.length();
//         int n2 = text2.length();
//         vector<vector<int>> dp(n1,vector<int>(n2,-1));
//         return solve(n1-1,text1,n2-1,text2,dp);
//     }

//     int help(vector<int> &v, int per_ind,int index){
//       if(index == v.size()){
//           return 0;
//       }
//         int len  = help(v, index, index+1);
//       if(per_ind == -1 || v[per_ind]<v[index]){
//           len = max(len , 1+help(v, index, index+1));
//       }
//         return len;


//     }
    
//     int lengthOfLIS(vector<int>& nums) {
        
// //         if(nums.size() == 1){
// //             return 1;
// //         }
        
// //         // if(nums[0] == nums[])
// //         int ans = 0;
// //         int check = INT_MIN;
// //         int a = 0;
//         int a = help(nums , -1, 0);

//         return a;
//     }
    vector<vector<int>> dp;
    int lengthOfLIS(vector<int>& nums) {
        dp.resize(size(nums), vector<int>(1+size(nums), -1));   // dp[i][j] denotes max LIS starting from i when nums[j] is previous picked element
        return solve(nums, 0, -1);
    }
    int solve(vector<int>& nums, int i, int prev_i) {
        if(i >= size(nums)) return 0;
        if(dp[i][prev_i+1] != -1) return dp[i][prev_i+1];
        int take = 0, dontTake = solve(nums, i + 1, prev_i);
        if(prev_i == -1 || nums[i] > nums[prev_i]) take = 1 + solve(nums, i + 1, i); // try picking current element if no previous element is chosen or current > nums[prev_i]
        return dp[i][prev_i+1] = max(take, dontTake);
    }
};