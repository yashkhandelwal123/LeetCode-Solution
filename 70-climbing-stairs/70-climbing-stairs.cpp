class Solution {
public:
    int help(int n, vector<int> &v){
        if(n<=1){
            // count++;
            
            return 1;
        }
        
        if(v[n]!= -1){
                return v[n];
            }
        // if(index == 1){
        //     return 1;
        // }
        // index+=1;
        // help(n , index-1 , count);
        
        // index = index-1;
        return v[n] = help(n-1 , v) + help(n-2, v);
    }
    

    int climbStairs(int n) {
        int count = 0;
        int index = n;
        vector<int> v(n+1 ,-1);
        
        int ans = help(n , v);
        
        
        
        return ans;
    }
};