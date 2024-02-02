class Solution {
public:
    int numIslands(const vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    makeIsland(grid, i, j, visited);
                    count++;
                }
            }
        }
        return count;
    }

    void makeIsland(const vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& visited) {
        if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || grid[i][j] == '0' || visited[i][j]) {
            return;
        }
        visited[i][j] = true;

        makeIsland(grid, i, j - 1, visited);
        makeIsland(grid, i + 1, j, visited);
        makeIsland(grid, i - 1, j, visited);
        makeIsland(grid, i, j + 1, visited);
    }
};
