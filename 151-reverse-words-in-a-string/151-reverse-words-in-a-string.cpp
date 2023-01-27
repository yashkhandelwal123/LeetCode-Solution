class Solution {
public:
vector<string> v;
    string reverseWords(string s) {
//         int index = 0;
//         string c = "";
//         for(int i = 0; i<s.size(); i++){
//             // cout<<S
//             if(s[i] == ' '){
//                 v.push_back(c);
//                 c = "";
//             }
//             c.push_back(s[i]);
            
//         }
//         reverse(v.begin() ,v.end());
//         // for(int i = 0; i<v.size(); i++){
//         //     cout<<v[i]<<" "<<endl;
//         // }
//         return s;
        stack<string> k;
        int count = 0;
        string a;
        for(int i = 0; i<s.size(); i++){
            string temp;
            
            if(s[i] == ' ' && temp == ""){
                continue;
            }
            
            while(s[i] != ' ' && i<s.size()){
                temp+=s[i];
                i++;
            }
            
            if(s[i] = ' ' && temp != ""){
                count++;
                k.push(temp);
            }
            
        }
        for(int i = 0 ;i<count-1; i++){
            a = a + k.top() + " ";
            k.pop();
        }
        a+=k.top();
        // while(!k.empty()){
        //     a = a + k.top() + " ";
        //     k.pop();
        // }
        
        return a;
    }
};