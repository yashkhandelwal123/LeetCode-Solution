class Solution {
public:
    vector<vector<int>> dp;
    void help(vector<int>& nums, vector<int> v, int &sum,int &ans , int index){
        if(index == nums.size()){
            // int s =0;
            // for(int i = 0; i<v.size(); i++){
            //     s+=v[i];
            // }
            // cout<<s<<endl;
            dp.push_back(v);
            // cout<<sum<<endl;
            ans = max(sum , ans);
            return;
        }
        
        v.push_back(nums[index]);
        index++;
        sum+=nums[index];
        help(nums ,v , sum,ans , index);
        v.pop_back();
        sum = sum - nums[index];
        help(nums , v ,sum,ans , index++);
    }
    int maxSubArray(vector<int>& nums) {
        
    // vector<int> v;
    // int sum = 0;
    // int index = 0;
    // int ans = 0;
    // help(nums , v , sum, ans , index);
    // for (int i = 0; i < dp.size(); i++)
    // {
    //     for (int j = 0; j < dp[i].size(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }    
    //     cout << endl;
    // }
        int ans = nums[0];
        
        int curr = 0;
        for(int i = 0; i<nums.size(); i++){
            if(curr<0){
                curr = 0;
            }
            curr+=nums[i];
            
            ans = max(ans , curr);
        }
        
        
        
        return ans;
        
    }
};