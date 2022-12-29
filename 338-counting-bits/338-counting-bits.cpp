class Solution {
public:
    void help(int n, int &count){
        if(n==0){
            return;
        }
        
        if(n&1 == 1){
            count++;
        }
        
        help(n>>1, count);
        return;
        
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i = 0; i<=n; i++){
            int count = 0;
            help(i,count);
            cout<<count<<endl;
            v.push_back(count);
        }
        
        return v;
    }
};