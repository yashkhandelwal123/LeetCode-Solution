class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int x = max(word1.size(),word2.size());
        int n = word1.size() , m = word2.size();
//         if(n == 0){
//             return word2;
//         }
//         if(m == 0){
//             return word1;
//         }
        int i =0,j=0;
        string res = "";
        while (i < n || j < m) {
            if (i < n)
                res.push_back(word1[i++]);
            if (j < m)
                res.push_back(word2[j++]);
        }
//         int j = 0 ,k =0;
//         for(i =0 ; i<n+m; i++){
//             // if(i%2 == 0 && word1[k]){
//             //     temp+=word1[k];
//             //     k++;
//             // }else{
//             //     if(word2[j]){
//             //         temp+=word2[j];
//             //         j++;
//             //     }
//             //     // i--;
//             // }   
//             if(i < n || j<m){
                
//             }
//         }
        // if(k<n-1){
        //     string s = word1.substr(i,n-1);
        //     temp+=s;
        // }
        // if(j<m-1){
        //     string s = word2.substr(j,m-1);
        //     temp+=s;
        // }
        
        return res;
        
//         if(i<x){
//             string s = word1.substr(i,word1.size()-1);
//             temp+=s;
//         }
        
//         if(j<)
    }
};