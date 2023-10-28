class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k =k%n;
        vector<int> v(n);
        for(int i =0 ;i<n &&nums.size() -k +i<nums.size(); i++){
            int x = nums.size() -k +i;
            // cout<<nums[x]<<" ";
            v[i] =nums[x];
        }
        for(int i =0;i+k <n; i++){
            v[i+k] = nums[i];
        }
        
        for(int i =0;i<n; i++){
            nums[i] =v[i];
            // cout<<v[i]<<" ";
        }
    }
};