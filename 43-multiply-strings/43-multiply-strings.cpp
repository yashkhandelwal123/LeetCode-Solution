class Solution {
public:
    string multiply(string num1, string num2) {
        
        if (num1 == "0" || num2 == "0") return "0";
        
        vector<int> res(num1.size()+num2.size(), 0);
        
        for (int i = num1.size()-1; i >= 0; i--) {
            for (int j = num2.size()-1; j >= 0; j--) {
                res[i + j + 1] += (num1[i]-'0') * (num2[j]-'0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10;
            }
        }
        
        int i = 0;
        string ans = "";
        while (res[i] == 0) i++;
        while (i < res.size()) ans += to_string(res[i++]);
        
        return ans;
        
//         vector<int> v(num1.size()+num2.size(),-1);
//         for(int i = num1.size()-1; i>=0; i--){
//             int carry = 0, r = 0;
//             for(int j = num2.size()-1; j>=0; j--){
//                 int x = num1[i]-'0';
//                 int y = num2[j] - '0';
//                 carry = (x*y)/10;
//                 r =((x*y)%10) + carry;
//                 v.push_back(r);
//             }
            
            
//         }
        
//         // unsigned x = (x1*x2);
//         string s = "";
// //         while(x!=0){
// //             char t;
// //             int r = x%10;
// //             x/=10;
// //             // t+=('0'+r);
// //             s.push_back(('0'+r));
                
// //         }
//         for(int i = 0 ;i<v.size(); i++){
//             if(v[i] == -1) continue;
//             s+=('0'+v[i]);
//         }
//         reverse(s.begin() ,s.end());
//         if(s == ""){
//             return "0";
//         }
        
//         // s+=('0' + x);
//         return s;
    }
};