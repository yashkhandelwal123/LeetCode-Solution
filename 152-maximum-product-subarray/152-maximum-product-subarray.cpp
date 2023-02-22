class Solution {
public:
    // vector<int> dp;
    // void help(vector<int>& nums, int index, int )
    int maxProduct(vector<int>& nums) {
        int c = 1;
        int ans = INT_MIN;
        for(int i= 0 ;i<nums.size(); i++){
            c*=nums[i];
            ans = max(c,ans);
            if(c==0) c=1;
        }
        
        c = 1;
        for(int i = nums.size()-1; i>=0; i--){
            c*=nums[i];
            ans = max(c,ans);
            if(c==0) c=1;
        }
        return ans;
    }
};