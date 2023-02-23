class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i : nums){
            m[i]++;
        }
        for(auto i : m){
            if(i.second >=2){
                v.push_back(i.first);
            }
        }
        return v;
    }
};