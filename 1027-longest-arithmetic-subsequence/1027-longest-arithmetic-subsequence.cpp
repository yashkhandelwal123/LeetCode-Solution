class Solution {
public:
    unordered_map<int,int> m;
    void help(vector<int>& nums, int index){
        if(index ==nums.size()){
            return;
        }
        int a = nums[index+1]-nums[index];
        m[a]++;
        help(nums, index++);
        m[a]--;
        help(nums, index++);
    }
    int longestArithSeqLength(vector<int>& A) {
        int n = A.size();
        int result = 0;
        vector<unordered_map<int, int>> dp(n);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int diff = A[i]-A[j];
                dp[i][diff] = dp[j].count(diff) > 0 ? dp[j][diff] + 1 : 2;
                result = max(result, dp[i][diff]);
            }
        }
        return result;
    }
};