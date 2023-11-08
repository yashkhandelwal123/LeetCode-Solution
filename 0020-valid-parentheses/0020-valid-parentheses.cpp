class Solution {
public:
    bool isValid(string s) {
        stack<char> k;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                k.push(s[i]);
            } else {
                if (k.empty()) return false;
                char x = s[i];
                char top = k.top();
                if ((x == '}' && top == '{') ||
                    (x == ')' && top == '(') ||
                    (x == ']' && top == '[')) {
                    k.pop();
                } else {
                    return false; 
                }
            }
        }

        return k.empty();
//         stack<char> k;
//         for(int i = 0;i<s.size(); i++){
//             if(s[i] == '{' || s[i] == '(' || s[i] == '['){
//                 k.push(s[i]);
//             }
//             else{
//                 char x = s[i];
//                 if(s[i]== k.top()){
//                     k.pop();
//                     // continue;
//                 }
//                 else{
//                     return false;
//                 }
                
//             }
//         }
        
//         // if(!k.empty()) return false;
        
//         return k.empty();
    }
};