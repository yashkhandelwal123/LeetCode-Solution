// class Solution {
// public:
    // const int N = 1e3+7;
    // vector<int> g[N];
    // vector<bool> vis(N,false);
//     void dfs(int v , vector<bool> &vis ,vector<int> g[]){
//         vis[v] = true;
        
//         for(const auto& child : g[v]){
//             if(vis[child]) continue;
            
//             dfs(child ,vis,g);
//         }
//     }
   class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int, int> m;
        vector<int> v;

        for (const auto& edge : edges) {
            int x = edge[0];
            int y = edge[1];

            m[y]++;
        }

        for (int i = 0; i < n; i++) {
            if (m.count(i) == 0) {
                v.push_back(i);
            }
        }

        return v;
    }
};

// class Solution {
// public:
//     void dfs(int v, vector<bool>& vis, vector<int> g[]) {
//         vis[v] = true;

//         for (auto child : g[v]) {
//             if (!vis[child]) {
//                 dfs(child, vis, g);
//             }
//         }
//     }

//     vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
//         vector<int> g[n];
//         vector<bool> vis(n, false);
//         vector<int> v;

//         for (const auto& edge : edges) {
//             int x = edge[0];
//             int y = edge[1];

//             g[x].push_back(y);
//         }

//         for (int i = 0; i < n; i++) {
//             if (!vis[i]) {
//                 v.push_back(i);
//                 dfs(i, vis, g);
//             }
//         }

//         return v;
//     }
// };
