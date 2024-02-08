class Solution {
public:
    void dfs(vector<vector<int>>& v,int s, vector<int> &vis){
        vis[s] = 1;
        for(int i =0 ;i<v.size(); i++){
            if(v[s][i]){
                if(!vis[i]){
                    dfs(v,i,vis);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<int> vis(n,0);
        for(int i = 0;i<isConnected.size(); i++){
            if(!vis[i]){
                dfs(isConnected, i, vis);
                count++;
            }
        }
        
        return count;
    }
};