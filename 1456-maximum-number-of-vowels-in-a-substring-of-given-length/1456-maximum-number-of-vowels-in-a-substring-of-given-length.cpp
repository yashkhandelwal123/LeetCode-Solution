// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int max_len = 0;
//         int n = s.size();
//         // vector<int> v(n+1,0);
//         int j =0;
//         int count = 0;
//         for(int j =0 ;j<k; j++){

//                 if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
//                     count++;
//                 }
            
//         }
//         j = k;
//         for(int i =0 ;k<n; i++){
//             max_len = max(max_len,count);
//             if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
//                 count--;
//             }
//             // i++;
//             j++;
//             if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
//                     count++;
//             }
            
//         }
        
//         // for(int i =0 ;i<n+1;i++){
//         //     if(v[i]>max_len && v[i]<=k){
//         //         max_len = v[i];
//         //     }
//         // }
        
//         return max_len;
//     }
// };

class Solution {
public:
    int maxVowels(string s, int k) {
        int max_len = 0;
        int n = s.size();
        int count = 0;

        for (int i = 0; i < k; ++i) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }
        max_len = count;

        for (int i = k; i < n; ++i) {
            if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
                count--;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
            max_len = max(max_len, count);
        }
        
        return max_len;
    }
};
