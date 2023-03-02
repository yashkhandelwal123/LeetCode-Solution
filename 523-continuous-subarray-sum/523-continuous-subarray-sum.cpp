class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
//         if(nums.size()<2) return false;
//         unordered_map<int,int> m;
        
//         int curr = 0;
//         m[curr] = -1;
//         for(int i = 0;i<nums.size(); i++){
//             curr+=nums[i];
//             if(m.find(curr%k)!=m.end()){
//                 if(i-m[curr%k])
//                 return true;
//             }
//             else{
//                 m[curr%k] = i;
//             }
//             // if(curr == k){
//             //     return true;
//             // }
//             // if(curr+nums[i]<=k){
//             //     curr+=nums[i];
//             //     if(k%curr == 0) return true;
//             //     // k-=nums[i];
//             // }
//             // else if(curr+nums[i]>k){
//             //     curr =0;
//             // }
//             // else{
//             //     curr = 0;
//             // }
//         }
//         return false;
             if(nums.size()<2)
            return false;
                
        unordered_map<int, int> mp;

        
        mp[0]=-1;
        
        int runningSum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            runningSum+=nums[i];
            
            if(k!=0) 
                runningSum = runningSum%k;
            

            if(mp.find(runningSum)!=mp.end())
            {
                
                if(i-mp[runningSum]>1)
                    return true;
            }
            else
            {

                
                mp[runningSum]=i;
            }
                    
        }
        
        return false;
    }
};