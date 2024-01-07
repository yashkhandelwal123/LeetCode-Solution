class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i =0 , j=0;
        int ans = 0;
        int count = 0;
        // int i = 0;
        while(j<nums.size()){
            if(nums[j] == 0){
                count++;
            }
            while(count>k){
                if(nums[i]==0){
                    count--;
                }
                i++;
            }
            ans = max(ans,j-i+1);
            j++;
            // if(nums[i] == 1){
            //     ans = max(ans,j-i+1);
            //     j++;
            // }
            // if(nums[i] == 0 && count<=k){
            //     ans = max(ans,j-i+1);
            //     count++;
            //     j++;
            // }
            // else if(nums[i] == 0 && count>k){
            //     // ans 
            //     i = j;
            //     j++;
            //     count = 1;
            // }
            // ans = max(ans,j-i+1);
        }
        
        return ans;
    }
};