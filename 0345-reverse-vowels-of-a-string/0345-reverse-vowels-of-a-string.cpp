class Solution {
public:
    string reverseVowels(string s) {
        vector<int> v;
        for(int i =0 ;i<s.size(); i++){
            if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u' || s[i]== 'A' || s[i]== 'E' || s[i]== 'I' || s[i]== 'O' || s[i]== 'U')
        {
            v.push_back(i);
        }
        }
        
        // for(int i=0 ;i<v.size(); i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<" ";
        
        int i = 0 , j = v.size()-1;
        while(i<j){
            char temp = s[v[i]];
            s[v[i]] = s[v[j]];
            s[v[j]] = temp;
            j--;
            i++;
        }            
        
        
        return s;
    }
};