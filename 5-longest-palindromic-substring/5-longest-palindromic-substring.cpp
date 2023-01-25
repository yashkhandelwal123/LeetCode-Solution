class Solution {
public:
int palindromeCheck(string &s, int start, int end)
    {
        while(start>=0 and end<s.length() and s[start]==s[end])
        {
            start--;
            end++;
        }
        return end-start-1;
    }
    
    string longestPalindrome(string s) {
        
        int ans = 0, st=0;
        int n = s.length();
        
        for(int i = 0;i<n;i++)
        {
            int l1 = palindromeCheck(s, i,i);
            int l2 = palindromeCheck(s, i, i+1);
            int len = max(l1, l2);  
            if(len> ans)
            {
                ans = len;
                st = i-(len-1)/2;
            }
        }
        return s.substr(st, ans);
    }
};