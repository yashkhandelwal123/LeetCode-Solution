class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // if(nums.size()==1){
        //     return nums[0];
        // }
        // int start = 0;
        // int end = nums.size()-1;
        // while(start<end){
        //     int mid = start + (end-start)/2;
        //     if(nums[mid] != nums[mid-1] && nums[mid]!=nums[mid+1]){
        //         return nums[mid];
        //     }
        //     if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1])){
        //         start = mid+1;
        //     }
        //     else{
        //         end = mid;
        //     }
        // }
        // return nums[start];
        
        
         int start = 0, end = nums.size() - 1;
        while(start < end){
            int mid = (start + end)/2;
            if((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid - 1]))
                start = mid + 1;
            else
                end = mid;
        }
        
        return nums[start];
    }
};