// class Solution {
// public:
//     bool dp[10001];
//     bool canJumpFromPosition(int position, vector<int>& nums) {
//         if (position == nums.size() - 1) {
//             return true; // Reached the end of the array.
//         }
//         if(dp[position] != false) return dp[position];

//         int maxJump = min(position + nums[position], static_cast<int>(nums.size() - 1));

//         for (int nextPosition = position + 1; nextPosition <= maxJump; nextPosition++) {
//             if (canJumpFromPosition(nextPosition, nums)) {
//                 return dp[position] = true;
//             }
//         }

//         return dp[position] = false; 
//     }
// //     bool rec(int index , vector<int>& nums){
// //         if(index == nums.size()-1){
// //             return true;
// //         }
// //         bool ans =false;
// //         int maxJump = min(index + nums[index], static_cast<int>(nums.size() - 1));
// //         for(int i = 1+index; i<=maxJump; i++){
// //            if(rec(index+i ,nums))return true;
        
// //         }
// //         return false;
// //     }
//     bool canJump(vector<int>& nums) {
//         memset(dp,false,sizeof(dp));
//         bool ans = canJumpFromPosition(0,nums);
//         return ans;
//     }
// };
class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);  // Initialize memoization array with -1.

        return canJumpFromPosition(0, nums, memo);
    }

    bool canJumpFromPosition(int position, vector<int>& nums, vector<int>& memo) {
        if (position == nums.size() - 1) {
            return true; // Reached the end of the array.
        }

        if (memo[position] != -1) {
            return memo[position] == 1; // Return memoized result.
        }

        int maxJump = min(position + nums[position], static_cast<int>(nums.size() - 1));

        for (int nextPosition = maxJump; nextPosition > position; nextPosition--) {
            if (canJumpFromPosition(nextPosition, nums, memo)) {
                memo[position] = 1; // Memoize the result as true.
                return true;
            }
        }

        memo[position] = 0; // Memoize the result as false.
        return false;
    }
};
