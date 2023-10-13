class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        if (totalSum % 2 != 0) {
            return false;  // If the total sum is odd, we can't partition into two equal subsets.
        }

        int targetSum = totalSum / 2;
        vector<bool> dp(targetSum + 1, false);
        dp[0] = true;

        for (int num : nums) {
            for (int i = targetSum; i >= num; i--) {
                dp[i] = dp[i] || dp[i - num];
            }
        }

        return dp[targetSum];
    }
};

// class Solution {
// public:
//     void help(vector<int> nums,int index, int & sum, vector<int> & x, int ts ,int &count){
//         if(index >= nums.size()){
//             //do something
//             int ls = ts - sum;
//             if(ls == sum) count =1;
//             return;
//         }
        
//         x.push_back(nums[index]);
//         help(nums, index+1, sum+=nums[index], x,ts, count);
//         x.pop_back();
//         help(nums, index+1, sum ,x,ts,count);
//     }
//     bool canPartition(vector<int>& nums) {
//         vector<int> x;
//         int ts = 0;
//         int sum = 0;
//         for(int i= 0; i<nums.size(); i++){
//             ts+=nums[i];
//         }
        
//         int count = 0;
//         help(nums, 0, sum,x,ts, count);
        
//         if(count) return true;
        
        
// //         sort(nums.begin(), nums.end());
// //         if (nums.size() <= 1) {
// //             return false;
// //         }
        
// //         int i = 0, j = nums.size() - 1;
// //         long long sum1 = 0, sum2 = 0;

// //         while (i < j) {
// //             if (sum1 < sum2) {
// //                 sum1 += nums[i];
// //                 i++;
// //             } else if (sum2 < sum1) {
// //                 sum2 += nums[j];
// //                 j--;
// //             } else {
// //                 return true;
// //             }
// //         }
        
//         return false;
        
//     }
// };