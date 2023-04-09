class Solution {
public:
    int countSpecialSubsequences(vector<int>& nums) {
        long long z = 0;
        long long zo = 0;
        long long zot = 0;
        for(int i = 0 ;i< nums.size(); i++){
            if(nums[i] == 0){
                z = (2*z +1)%1000000007;
            }
            else if(nums[i] == 1){
                zo = (2*zo +z)%1000000007;
            }
            else{
                zot = (2*zot + zo)%1000000007;
            }
        }
        
        return zot%1000000007;
    }
};