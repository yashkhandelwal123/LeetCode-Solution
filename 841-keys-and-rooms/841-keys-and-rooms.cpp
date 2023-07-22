class Solution {
public:
    void dfs(int v ,vector<vector<int>>& rooms ,vector<bool> &vis){
        vis[v] = true;
        
        for(auto& child : rooms[v]){
            if(!vis[child]){
                dfs(child , rooms ,vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       vector<bool> vis(rooms.size() , false);
        
        dfs(0, rooms ,vis);
        
        for(int i = 0; i<rooms.size(); i++){
            if(vis[i] == false){
                return false;
            }
        }
        
        return true;
    }
};