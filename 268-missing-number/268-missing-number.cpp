class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        int S = (x+1)*(x)/2;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
        }
        return S-sum;
    }
};