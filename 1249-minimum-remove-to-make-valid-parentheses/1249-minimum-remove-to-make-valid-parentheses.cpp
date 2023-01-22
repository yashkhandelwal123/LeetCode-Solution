#include<bits/stdc++.h>
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // stack<char> k;
//         int count = 0;
//         for(int i = 0; i<s.size(); i++){
//             if(s[i]=='('){
//                 count++;
//             }
//             if(s[i] == ')' && count>0){
//                 count--;
//             }
//             else if(s[i] == ')' && count == 0){
//                 s.erase(i,1);
//             }
// //             else if(s[i] == ')'){
// //                 if(k.empty()){
// //                     // s.replace(")" , "");
// //                     cout<<s<<endl;
                    
// //                     s.erase(s.begin() + i);
// //                 }
// //                 k.pop();
// //             }
//         }
//         if(count >0){
//             return "";
//         }
//         cout<<s<<endl;
//         return s;
          stack<int> st;
  for (auto i = 0; i < s.size(); ++i) {
    if (s[i] == '(') st.push(i);
    if (s[i] == ')') {
      if (!st.empty()) st.pop();
      else s[i] = '*';
    }
  }
  while (!st.empty()) {
    s[st.top()] = '*';
    st.pop();
  }
  s.erase(remove(s.begin(), s.end(), '*'), s.end());
  return s;
        
    }
};