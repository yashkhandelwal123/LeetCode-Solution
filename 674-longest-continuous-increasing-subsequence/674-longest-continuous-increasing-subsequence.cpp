class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 1){
            return 1;
        }
        int dp[nums.size()];
        dp[0] = 1;
        int max = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                dp[i] = dp[i-1]+1;
            }
            else{
                dp[i] = 1;
            }
            if(max<dp[i]){
                max = dp[i];
            }
        }
        return max;
    }
};