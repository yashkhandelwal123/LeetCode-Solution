// class Graph{
// public:
//     int src;
//     int neighbour;
    
//     Graph(int scr,int neighbour){
//         this.src = src;
//         this.neighbour = neighbour;
//     }
// };

vector<vector<int>> v;

class Solution {
public:
//     void printpath(vector<vector<int>>& graph , int src,int end,vector<int> ans){
//         ans.push_back(src);
        
//         if(src == end){
//             v.push_back(ans);
//             return;
//         }
        
        
//         // visited[src] = true;
        
//         for(auto neighbour : graph[src]){
//             printpath(graph ,neighbour ,end ,ans);
//         }
        
//         // for(auto )
//     }
//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         int n = graph.size();
// //         vector<Graph> edge(n);
        
// //         for(int i = 0; i<n; i++){
// //             edge[i]
// //         }
//         vector<int> ans;
//         int src = 0, end = n-1;
//         printpath(graph,src,end,ans);
        
//         return v;
//     }
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int> path, int src, int dst) {
    path.push_back(src);
    if(src == dst) {
        result.push_back(path);
        return;
    }

    for(auto node : graph[src])
        dfs(graph, result, path, node, dst);
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> paths; vector<int> path;
    int nodes = graph.size();
    if(nodes == 0) return paths;
    dfs(graph, paths, path, 0, nodes - 1);
    return paths;
}
};