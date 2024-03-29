class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
      int land = 0;
        
        for(int i = 0; i<grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == '1') {
                    land ++;
                    DFS(grid, i, j);
                }
            }
        }
        return land;
    }
    
    void DFS(vector<vector<char>>& grid, int i, int j) {
        if(i< 0 || j < 0|| j > grid[0].size()-1 || i > grid.size()-1|| grid[i][j] == '0') {
            return;
        }
        
        grid[i][j] = '0';
        
        DFS(grid, i-1, j);
        DFS(grid, i+1, j);
        DFS(grid, i, j-1);
        DFS(grid, i, j+1);
    }
};
