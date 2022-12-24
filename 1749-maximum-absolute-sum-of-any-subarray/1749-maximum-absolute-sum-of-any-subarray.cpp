class Solution {
public:
    void help(vector<int>& nums,int index, int &sum,int &max_sum){
        if(index==nums.size()){
            max_sum = max(max_sum ,sum);
            return;
        }
        
        sum+=abs(nums[index]);
        help(nums, index+1, sum,max_sum);
        sum-=abs(nums[index]);
        help(nums,index+1,sum,max_sum);
    }
    int helpAbsoluteSum(vector<int>& a) {
	int maxm_sum = INT_MIN, max_ending_here = 0; 
	int size = a.size();
	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here += a[i]; 
		maxm_sum = max(maxm_sum, max_ending_here); 
		if (max_ending_here < 0) 
			max_ending_here = 0; 
	}  

	int min_ending_here = 0, minm_sum = INT_MAX; 

	for (int i=0; i<size; i++) 
	{ 
		min_ending_here += a[i]; 
		minm_sum = min(minm_sum, min_ending_here);  
		if(min_ending_here > 0)
			min_ending_here = 0;
	} 

	return max(abs(maxm_sum), abs(minm_sum)); 
}
    int maxAbsoluteSum(vector<int>& nums) {
      int x =helpAbsoluteSum(nums);
        return x;
    }
};