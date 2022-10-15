class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> x;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int f;
        for(int i = 0; i<nums.size(); i++){
            int temp = nums[i];
            
            if(m.find(target-temp) == m.end()){
                continue;
            }
            else{
                // m.find(target-temp);
                f = target - temp;
                if(nums[i] == f){
                    continue;
                }
               x.push_back(i);
               // x.push_back(m.find(target-temp));
                break;
            }
        }
        for(int i = 0; i<nums.size();i++){
            // cout<<v[]
            if(nums[i]==f ){
                x.push_back(i);
            }
        }
        return x;
    }
};