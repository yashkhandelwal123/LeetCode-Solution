class Solution {
public:
    map<vector<int> ,int> v;
    void help(vector<int> nums, int index){
        if(index == nums.size()){
            v[nums]++;
            return;
        }
        if(v.find(nums) != v.end()) return;
        
        for(int i = 0; i<nums.size(); i++){
            swap(nums[index] ,nums[i]);
            help(nums,index+1);
            swap(nums[index] ,nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> m;
        help(nums,index);
        for(auto i: v){
            m.push_back(i.first);
        }
        return m;
    }
};