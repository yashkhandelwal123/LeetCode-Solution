class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         map<int, int> m;
//         if(nums1[0] < nums2[0]){
//             for(int i = 0; i<nums1.size(); i++){
//             m[nums1[i]]++;
//         }
        
//         for(auto i :m){
//             if(i.first == nums2[0]) return i.first;
//         }
//         }
//         else{
//             for(int i = 0; i<nums2.size(); i++){
//             m[nums2[i]]++;
//         }
        
//         for(auto i :m){
//             if(i.first == nums1[0]) return i.first;
//         }
//         }
        map<int,int> m;
        for( auto it : nums1 ) m[it]++;
        
        // if the min common value from n2 is present in the map
        for( auto it : nums2 ){
            if( m.find(it) != m.end() ) return it;
        }
        return -1;;
    }
};