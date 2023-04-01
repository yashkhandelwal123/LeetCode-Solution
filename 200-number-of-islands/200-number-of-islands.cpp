class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        // vector<vector<bool>> visited( grid.size() , vector<bool> (grid[0].size(), false));
        
        
        for(int i = 0; i<grid.size() ;i++){
            for(int j = 0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    makeisland(grid , i , j);
                    count++;
                }
            }
        }
        return count;
    }
    void makeisland(vector<vector<char>>& grid, int i, int j) {
        int m = grid.size(), n = grid[0].size();
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        makeisland(grid, i - 1, j);
        makeisland(grid, i + 1, j);
        makeisland(grid, i, j - 1);
        makeisland(grid, i, j + 1);
    }
};