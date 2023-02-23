#define ff(i, s, n) for (int i = s; i < n; i++)
#define fb(i, s, n) for (int i = n; i >= s; i--)
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // map<pair<int,int> ,int> m1;
        unordered_map<int,int> m;
        // ff(i,0,nums.size()){
        //     m[nums[i]]++;
        // }
        for(auto i: nums){
                m[i]++;
            }
        int count = 0;
        for(auto i:m){
            int x = k+i.first;
            if(k==0){
                if(i.second>1) count++;
            }
            else if(m.find(x) != m.end()){
                count++;
            }
            
        }
        // for(auto i : m){
        //     cout<<i.first<<" "<<i.second;
        // }
        
        return count;
        
        
        
        
        
//         unordered_map<int,int> a;
//         for(int i:nums)
//             a[i]++;
//         int ans=0;
//         for(auto x:a)
//         {
//             if(k==0)
//             {    
//                 if(x.second>1)
//                 ans++;
//             }
//              else if(a.find(x.first+k)!=a.end())
//                 ans++;
//         }
        
//         return ans;
//         unordered_map<int,int> m;
//         for(int i = 0; i<nums.size(); i++){
//             m[nums[i]] = i;
//         }
//         int count = 0;
//         for(int i = 0; i<nums.size(); i++){
//             int x = abs(nums[i]+k);
            
//             for(auto v : m){
//                 if(v.first == x && i != v.second){
//                     cout<<nums[i]<<" "<<v.first<<endl;
//                     m1[{nums[i],v.first}]++;
//                     // count++;
//                 }
//             }
//         }
    
//         return m1.size();
    }
};