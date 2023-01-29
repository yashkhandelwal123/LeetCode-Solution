class Solution {
public:
    int help(int n){
        int ans = 0;
        while(n!=0){
            int x = n%10;
            ans+=(x*x);
            n = n/10;
            
        }
        return ans;
    }
    bool isHappy(int n) {
        
        unordered_map<int,int> m;
        m[n]++;
        while(n!=1){
            n = help(n);
            
            if(m.count(n)>0){
                return false;
            }
            m[n]++;
        }
        return true;
    }
};