class Solution {
public:
    int binary_search(int target, vector<int>& nums , int start,int end){
        int mid;
        while(start<=end){
            mid = start +(end-start)/2;
            if(nums[mid]<target){
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else if(nums[mid] == target){
                return mid;
            }
        }
        return -1;
    }
    int max_element(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int mid , ans = 0;
        while(start<=end){
            mid = start +(end-start) /2;
            if(mid<end && nums[mid]>nums[mid+1]){
                ans = mid;
                return ans;
            }
            if(mid>start && nums[mid]<nums[mid-1]){
                ans = mid-1;
                return ans;
            }
            if(nums[mid]<=nums[start]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0] == target){
                return 0;
            }
            else
                return -1;
        }
        int x = max_element(nums , target);
        cout<<x;
        if(x == -1){
            return binary_search(target, nums, 0, nums.size()-1);
        }
        
        int a = binary_search(target, nums, 0, x);
        if(a != -1){
            return a;
        }
        int b = binary_search(target, nums, x+1, nums.size()-1);
        
        return b;
    }
};