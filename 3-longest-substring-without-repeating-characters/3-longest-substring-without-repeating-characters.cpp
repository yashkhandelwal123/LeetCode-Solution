class Solution {
public:
    int help(string s ,int x){
        
//         if(s.empty()){
//             if(s.size()>max){
//                 max = s.size();
//             }
//             return;
//         }
        
        // help()
        int ans = 0;
        int j = 0;
        // string a;
        string k = "";
        // while((j)<=s.size()){
        unordered_map<char,int> m;
            
           
           for(int i = j; i<s.size() && i<=j; i++){
               // ans = k.size();
               // string t = "";
               // t+=s[i];
                if(m.find(s[i]) == m.end()){
                    m[s[i]]++;
                    k+=s[i];
                    // m[k]++;
                    // ans++;
                    cout<<k<<endl;
                    ans = k.size();
                // j++;
                }
                else{
                    m.erase(s[i]);
                    cout<<k<<endl;
                    if(k.size() > ans){
                        ans = k.size();
                    }
                     j++;
                   
                
                    k = "";
                    k+=s[i];
                     
                    m[s[i]]++;
                    i = j;
                }
        
               
              // if(k.size()>sum){
              //     sum = k.size();
              //     // cout<<k<<endl;
              //     a = k;
              //     break;
              // }
            // break;
          }
        // }
        // cout<<a<<endl;
        return ans;
    }
    int lengthOfLongestSubstring(string s) {
        
        
        vector<int> map(256, -1);
        
        int maxLen = 0, right = -1;
        
        
        for (int i = 0; i != s.length(); i++) {
            if (map[s[i]] > right)
                right = map[s[i]];
            map[s[i]] = i;
            maxLen = max(maxLen, i - right);
        }
        
        
        
        return maxLen;
    }
    
};