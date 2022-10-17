class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());    
        vector<int> sum;
        for(int i=0; i<n-2; i++)
        {
            int left  = i+1, right = n-1;
            int t = target - nums[i];       
            while(left < right)
            {
                if(nums[left] + nums[right] > t)
                {
                    sum.push_back(nums[i] + nums[left] + nums[right]);
                    right--;
                }
                else if(nums[left] + nums[right] < t)
                {
                    sum.push_back(nums[i] + nums[left] + nums[right]);
                    left++;
                }
                
                else return target;
            }
        }
        
        int di = INT_MAX;
        for(int i=0; i<sum.size(); i++)
        {
            di= min(di, abs(sum[i]-target));
        }
        
        int ans;
        for(int i=0; i<sum.size(); i++)
        {
            if( di == abs(sum[i]-target) ) 
            {  
                ans = sum[i];
                break;
            }
        }
        
        return ans;
    }
};