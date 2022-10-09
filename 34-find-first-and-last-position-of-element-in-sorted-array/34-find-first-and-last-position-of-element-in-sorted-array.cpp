class Solution {
public:
    int help_first(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() -1;
        int mid;
        int ans = -1;
        while(start<=end){
            mid = start + (end-start) /2;
            if(target<nums[mid]){
                end = mid-1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        cout<<ans<<endl;
        return ans;
    }
    int help_last(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() -1;
        int mid;
        int ans = -1;
        while(start<=end){
            mid = start + (end-start) /2;
            if(target<nums[mid]){
                end = mid-1;
            }
            else if(target>nums[mid]){
                start = mid+1;
            }
            else{
                ans = mid;
                start = mid+1;
            }
        }
        cout<<ans<<endl;
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int f = help_first(nums , target);
        int l = help_last(nums , target);
        cout<<f<<" "<<l;
        v.push_back(f);
        v.push_back(l);
        return v;
    }
};