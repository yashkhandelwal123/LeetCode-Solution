class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // unordered_map<int,int> m;
        // for(int i =0 ;i<n; i++){
        //     m[nums[i]]++;
        // }
        vector<int> v;
        int x= 0;
        for(int i =0 ;i<nums.size(); i++){
            if(nums[i] == val){
            x++; continue;}
            
            v.push_back(nums[i]);
        }
        
        for(int i =0 ;i<v.size(); i++){
            nums[i] = v[i];
        }
        
        return nums.size() - x;
        
    }
};