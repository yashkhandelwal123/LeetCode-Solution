class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        
        int longest = 1;
        int curr = 0;
        int lsp = INT_MIN;
        for(int i =0 ;i<nums.size(); i++){
            if(nums[i]-1 == lsp){
                lsp = nums[i];
                curr++;
                
            }
            else if(nums[i] != lsp){
                lsp = nums[i];
                curr = 1;
            }
            longest = max(longest, curr);
        }
        return longest;
    }
};