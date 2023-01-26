class Solution {
public:
    string simplifyPath(string s) {
        stack<string> s1;
        string a;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='/'){
                continue;
            }
            string temp;
            while(i<s.size() && s[i]!='/'){
                temp+=s[i];
                i++;
            }
            
            if(temp == "."){
                continue;
            }
            else if(temp == ".."){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(temp);
            }
            
        }
        // reverse(s1);
        while(!s1.empty()){
            a = '/' + s1.top() + a;
            // string k;
            // k = s1.top();
            s1.pop();
            // a+=k;
        }
        if(a.size() == 0){
            return "/";
        }
        return a;
    }
};