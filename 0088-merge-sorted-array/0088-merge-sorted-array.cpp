class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size() == 0) return;
        // if(nums2.siz)
        vector<int> v;
        int i = 0, j = 0 ,k= 0;
        int x = nums1.size()-n;
        while(i<x && j<n){
            if(nums1[i] < nums2[j]){
                v.push_back(nums1[i++]);
            }
            else{
                v.push_back(nums2[j++]);
            }
        }
        while(i<x){
            v.push_back(nums1[i++]);
        }
        while(j<n){
            v.push_back(nums2[j++]);
        }
        
        // for()
        
        for(int i =0 ;i<v.size(); i++){
            cout<<v[i]<<" ";
            nums1[i] = v[i];
        }
    }
};