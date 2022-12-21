class Solution {
public:
//     int help(vector<int>& arr, int start,index){
//         if(index == 0){
//             return 1;
//         }
        
        
//     }
//     bool canReach(vector<int>& arr, int start) {
//         unordered_map<int,int> vis;
        
//         if (start >= 0 && start < arr.size() && vis[start].second) {
//         return arr[start] == 0 ||
//             canReach(arr, start + arr[start]) || canReach(arr, start - arr[start]);
//     }
//     return false;
//     }
    
    bool canReach(vector<int>& arr, int start) {
        if(arr[start]== -1) return false;
        if(!arr[start]) return true;
        int leftside= start-arr[start] ,rightside = start+arr[start];
    
        arr[start] = -1;
 
        return rightside = (rightside < arr.size() && canReach(arr,rightside) ) || (leftside>=0 && canReach(arr,leftside) );
    }
};