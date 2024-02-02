class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        make_heap(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i<k; i++){
            ans = nums.front();
            pop_heap(nums.begin(), nums.end());
            nums.pop_back();
        }


        return ans;
    }
};