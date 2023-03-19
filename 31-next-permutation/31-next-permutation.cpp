#include<bits/stdc++.h>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // unordered_map<int,int> m;
        // // vector<int> v;
        // int m = 0;
        // int temp = 0;
        // int count = 0;
        // for(int i = nums.size()-1; i>=0; i--){
        //     if(temp>nums[i]){
        //         m = i;
                
//                 // count = i;
//                 break;
//             }
//             else{
//                 temp = nums[i];
//                 count++;
//             }
// //             if(m.find(nums[i]) != m.end()){
                
// //             }
//         }
//         cout<<count<<endl;
        
//         for(int i = m; i<nums.size(); i++){
            
// //         }
//         if(count == nums.size()){
//             reverse(nums.begin() , nums.end());
//             return;
// //         }
//         while(count-- && count != nums.size()){
// //             
//             swap(nums[m], nums[m+1]);
//             m++;
//         }
        
        
//         int x = nums[m];
//         int y = nums[m+1];
//         nums[m+1] = y;
//         nums[m] = x;
        
        // for(int i = count; i<nums.size(); i++){
        //     v.push_back(nums[i]);
        // }
        // for(int i = 0; i<count; i++){
        //     v.push_back(nums[i]);
        // }
        // for(auto i : v){
        //     cout<<v[i]<<" "<<endl;
        // }
        // int x = nums[count];
        // nums[count] = max;
        
     int i = nums.size() - 2;
 
        
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i],  nums[j]);
        }
        reverse(nums.begin() + i + 1 , nums.end());
        
    }
};