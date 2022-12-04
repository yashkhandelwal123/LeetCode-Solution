class Solution {
public:
    vector<vector<int>> v;
    void help(vector<int>& nums ,vector<int> k,int* c){
        if(k.size() == nums.size()){
            v.push_back(k);
            return;
        }
                
        for(int i = 0; i<nums.size(); i++){
            if(c[i]!=1){
                k.push_back(nums[i]);
                c[i] = 1;
                help(nums ,k ,c);
                c[i] = 0;
                k.pop_back();
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> k;
        int c[nums.size()];
        help(nums, k , c);
        
        return v;
    }
};