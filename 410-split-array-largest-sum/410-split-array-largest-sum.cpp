class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int max_sum = 0;
        for(int i = 0; i<nums.size(); i++){
            max_sum+=nums[i];
        }
        int min_sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(min_sum<nums[i]){
                min_sum = nums[i];
            }
        }
        cout<<min_sum<<endl;
        cout<<max_sum<<endl;
        
        int start = min_sum;
        int end = max_sum;
        // int i = 0;
        while(start<end){
            int mid = start + (end-start)/2;
            int sum = 0;
            int count = 1;
            for(int i = 0; i<nums.size(); i++){
                if(sum + nums[i]>mid){
                    count++;
                    sum = nums[i];
                }
                else
                    sum+=nums[i];
            }
            cout<<count<<endl;
            
            if(count>k)
                
                start = mid+1;
            else
                end = mid;
        }
        
        return start;
    }
};