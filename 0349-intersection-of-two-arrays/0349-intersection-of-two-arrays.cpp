class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> v1,v2;
        for(int i =0 ;i<nums1.size(); i++){
            v1[nums1[i]]++;
        }
        
        
        for(int i =0 ;i<nums2.size(); i++){
            if(v1.find(nums2[i]) != v1.end()){
                v2[nums2[i]]++;
            }
        }
        vector<int> v;
        
        for(auto i :v2){
            v.push_back(i.first);
        }
        return v;
    }
};