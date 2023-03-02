class Solution {
public:
    vector<int> v;
    void help(vector<int> nums,int index ,int sum){
        if(index >= nums.size()){
            v.push_back(sum);
            return ;
        }
        
        help(nums,index+2,sum+nums[index]);
        help(nums,index+1,sum);
        
    }
    int rob(vector<int>& nums) {
        // int d[102];
        // d[0] = 0;
        // int max = 0;
        // int sum = 0;
        // for(int i = 0; i< nums.size(); i++){
        //     sum+=nums[i];
        // }
        // for(int i = 1; i< nums.size(); i++){
        //     // sum+=nums[i];
        //     d[i] = sum - (nums[i-1]) - nums[i+1];
        //     if(d[i]>max) max = d[i];
        // }
        // return max;
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size());
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        // int index = 0,sum = 0;
        // help(nums,index,sum);
        // sort(v.begin(),v.end());
        // return v[v.size()-1];
        }
        return dp[nums.size()-1];
    }
        
    
};