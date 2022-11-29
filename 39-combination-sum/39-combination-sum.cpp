class Solution {
public:
// vector<vector<int>> ans;
//     void help(vector<int>& candidates, int target ,vector<int> v,int i){
//         // if(target == 0)[
//         //     ans.push_back(v);
//         // ]
//         if(candidates.size()==0){
//             // vector<vector<int>> v;
//             // ans.push_back(v);
//             return;
//         }

//         if(i==candidates.size()){
//             if(target == 0){
//               ans.push_back(v);


//             }
//             return;
//         }
        

//         if(candidates[i]<=target){
//             v.push_back(candidates[i]);
//             help(candidates , target-candidates[i], v,i);
//             //we are poping out the element after the recursion is done with it,s work.If we will not pop the element the vector will pass as it is in other recursion call
//             v.pop_back();
//         }

//         help(candidates , target , v , i+1);

//         // ;

//         // if(candidates[0] <= target){

//         // }

//     }
    vector<vector<int>> v;
    // map<vector<int>, int> m;
    void help(vector<int>& nums ,vector<int> &k ,int index, int &sum,int target){
        // if(index == nums.size()){
        
            // if(sum == target){
            //     // m[k]++;
            //     v.push_back(k); 
            //     return;
            // }
        if(target <0){
            return;
        }
        if(index == nums.size())
            return;
        if(target==0){
            // sum-=nums[index];
            v.push_back(k); 
            return;
        }
            // m[k]++
            // v.push_back(k);
            // k.clear();
            // return;
        // }

        
        k.push_back(nums[index]);
        // sum+=nums[index];
        cout<<sum<<endl;
        help(nums , k ,index,sum,target-nums[index]);
        // sum-=nums[index];
        k.pop_back();
        // index++;
        help(nums , k ,index+1,sum,target);
        cout<<sum<<" "<<endl;
        // k.clear();

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         unordered_map<int ,int> m;
//         int sum = 0;
//         int count = 0;
//         m[0] = 1;
//         vector<vector<int>> v;
//         for(int i = 0; i<candidates.size(); i++){
//             sum+=candidates[i];
            
//             if(m.find(target - sum) != m.end()){
//                 count+=m[target-sum];
//             }
            
//             m[candidates[i]]++;
//         }
//            vector<int> v;
//            help(candidates , target , v , 0);
        
        
         vector<int> k;
        int index = 0;
        int sum = 0;
        help(candidates , k ,index , sum,target);
        return v;

//            return ans;
//         cout<<count<<endl;
//         return v;
    }
};