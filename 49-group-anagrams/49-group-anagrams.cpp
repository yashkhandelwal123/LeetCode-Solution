class Solution {
public:
    #include<unordered_map>
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         map<map<char,int> , vector<string>> m;
//         for(int i = 0; i<strs.size(); i++){
//             map<char,int> m1;
//             for(int j = 0; j<strs[i].size(); j++){
//                 m1[strs[i][j]]++;
//             }
//             if(m.find(m1) != m.end()){
//                 for(auto x :m){
//                     if(x.first == m1) {
//                         vector<string> s;
//                         s = x.second;
//                         s.push_back(strs[i]);
//                         x.second = s;
//                         // x.second.push_back(strs[i]);
//                     }
//                 }
//             }
//             else{
//                 vector<string> s;
//                 s.push_back(strs[i]);
//                 m[m1] = s;
//             }
//         }
        
//         vector<vector<string>> v;
//         for(auto i : m){
//             v.push_back(i.second);
//         }
        
//         return v;
        if(strs.size() == 1)
            return {{strs[0]}};
        
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> M;
        for(int  i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); // Sorting the string
            M[strs[i]].push_back(str);  // Sorted string is the key and the value is the initial string
        }
        for(auto i = M.begin(); i != M.end(); i++)
            ans.push_back(i -> second);  // Traversing the map and adding the vectors of string to ans
        return ans;
    
    }
};