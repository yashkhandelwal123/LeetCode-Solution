class Solution {
public:
    int secondHighest(string s) {
        map<int,int> m;
        for(int i = 0; i<s.size(); i++){
            int x = s[i] -'0' ;
            if(x>=0 && x<=9){
                m[x]++;
            }
        }
        int a = -1;
        
        if(m.size()>1){
            int count = 0;
            for(auto i = m.rbegin(); i != m.rend(); ++i ){
                
                if(count >=2){
                    break;
                }
                // cout<<i.first<<" ";/
                a = i->first;
                count++;
                
            }
        }
        else{
            return -1;
        }
        
    return a;
    }
};