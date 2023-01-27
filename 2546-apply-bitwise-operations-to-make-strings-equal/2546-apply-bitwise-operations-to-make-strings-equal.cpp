class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        if(s == target){
            return true;
        }
        
        bool a1 = false,a2 = false;
        for(int i = 0 ;i<s.size(); i++){
            if(s[i] == '1') a1 = true;
            if(target[i] == '1') a2 = true;
        }
        
        return a1&a2;
        
        
    }
};