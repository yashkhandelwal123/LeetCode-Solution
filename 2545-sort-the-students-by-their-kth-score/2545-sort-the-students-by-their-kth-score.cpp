#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,int> m;
        
        for(int i = 0; i<score.size(); i++){
            m[score[i][k]] = i;
        }
        
        vector<vector<int>> v;
        for (auto i = m.rbegin(); i != m.rend(); ++i) {
            v.push_back(score[i->second]);
        }
        
        return v;
    }
};