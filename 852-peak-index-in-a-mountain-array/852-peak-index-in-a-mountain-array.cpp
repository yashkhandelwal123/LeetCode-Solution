class Solution {
public:
    // int help(vector<int>& nums, int target , int start, int end){
    //     // int start = 0;
    //     // int end = nums.size() -1;
    //     int mid;
    //     // int ans = -1;
    //     while(start<=end){
    //         mid = start + (end-start) /2;
    //         if(target<nums[mid]){
    //             end = mid-1;
    //         }
    //         else if(target>nums[mid]){
    //             start = mid+1;
    //         }
    //         else{
    //             return nums[mid];
    //         }
    //     }
    //     // cout<<ans<<endl;
    //     return -1;
    // }
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() -1;
        int mid;
        while(start<end){
            mid = start +(end-start) /2;
            if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
            else if(arr[mid]>arr[mid+1]){
                end = mid;
            }
            // else{
            //     return arr[start];
            // }
        }
        return start;
    }
};