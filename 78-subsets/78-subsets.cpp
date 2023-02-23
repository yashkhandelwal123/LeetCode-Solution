class Solution {
public:

    vector<vector<int>> v;
    void help(vector<int>& nums ,vector<int> &k ,int index){
        if(index == nums.size()){
            v.push_back(k);
            // k.clear();
            return;
        }

        
        k.push_back(nums[index]);
        help(nums , k ,index+1);
        k.pop_back();
        index++;
        help(nums , k ,index);
        // k.clear();

    }
    vector<vector<int>> subsets(vector<int>& nums ) {
        // if(nums.size() == 0){
        //     v.push_back(k);
        //     k.clear();
        // }




        // vector<vector<int>> v;
        // vector<int> x;
        // v.push_back(x);
        // for(int i = 0; i<nums.size(); i++){
            
        // }
        vector<int> k;
        int index = 0;
        help(nums , k , 0);
        return v;
    }
};