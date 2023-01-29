class Solution {
public:
    bool isPalindrome(int x) {
//         if(x<0) return false;
        
//         int temp = 0;
//         temp = x;
//         int a = 0;
//         while(temp!=0){
//             int r = temp%10;
//             a = a*10+r;
//             temp = temp/10;
//         }
//         if(a == x){
//             return true;
//         }
//         return false;
        string rev = to_string(x);
        reverse(rev.begin(), rev.end());
        return to_string(x) == rev;
    }
};