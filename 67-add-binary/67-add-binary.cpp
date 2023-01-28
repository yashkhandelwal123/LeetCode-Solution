class Solution {
public:
    string addBinary(string a, string b) {
//         int carry = 0;
//         string s;
//         int x = max(a.size() ,b.size());
//         for(int i = 0; i<x; i++){
//             int n = a[i] - '0';
//             int k = b[i] - '0';
//             if(n+k+carry>1){
                
//                 if(n+k+carry % 2 != 0){
//                     carry = 1;
//                     s.push_back('1');
//                 }
//                 else{
//                     carry = 1;
//                     s.push_back('0');
//                 }
                
//             }else if(n+k+carry == 1){
//                 // string y = n+k+carry + '0';
//                 s.push_back('1');
//             }
//             else{
//                 s.push_back('0');
//             }
//         }
//         return s;
         int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry += a[i] - '0';
                i--;
            }
            if(j>=0){
                carry += b[j] - '0';
                j--;
            }
            
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};