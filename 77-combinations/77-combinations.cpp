class Solution {
public:
    vector<vector<int>> v;
    
    void help(vector<int>& nums ,vector<int> &k ,int index,int l){
        if(index == nums.size()){
            if(k.size()==l)
                v.push_back(k);
            // k.clear();
            return;
        }

        
        k.push_back(nums[index]);
        help(nums , k ,index+1 , l);
        k.pop_back();
        index++;
        help(nums , k ,index, l);
        // k.clear();

    }
    vector<vector<int>> combine(int n, int k) {
        
        
        vector<int> nums;
        int i = 1;
        while(i!=n+1){
            nums.push_back(i);
            i++;
        }
        
        for(int i = 0; i<nums.size(); i++){
            cout<<nums[i]<<" ";
        }
        
    
        vector<int> l;


        help(nums,l,0,k);

        return v;
        
    }
};