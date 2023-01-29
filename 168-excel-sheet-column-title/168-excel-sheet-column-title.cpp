class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x = columnNumber/26;
        int y = columnNumber%26;
        string tmp;
        string a;
       while(columnNumber){

        columnNumber -= 1;

        tmp = 'A' + columnNumber % 26;

        a = tmp + a;

        columnNumber /= 26;

    }
        return a;
    }
};