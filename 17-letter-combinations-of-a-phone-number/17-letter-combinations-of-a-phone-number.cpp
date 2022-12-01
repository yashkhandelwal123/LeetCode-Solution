class Solution {
public:
    unordered_map<int , string> m;
    vector<string> v;
    void help(string s, string t){
        if(t.size() == 0){
            v.push_back(s);
            return;
        }
        int digit = t[0] - '0';
        string bit;
        for(auto x : m){
            if(digit == x.first)
            {
                bit = x.second;
                break;
            }
        }
        
        for(int i = 0;i<bit.size(); i++){
            char a = bit[i];
            help(s+a , t.substr(1));
        }
    }
    vector<string> letterCombinations(string digits) {
        // vector<string> v;
        
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        
        // cout<<digits[0] - 48 <<endl;
        // for(int i = 0; i<digits.size(); i++){
        //     int x = digits[i] - '0';
        //     auto f = m.find(x);
        //     // if(m->first == )
        // }
        if(digits.size() ==0){
            return v;
        }
        string s;
        help(s , digits);
        
        return v;
    }
};