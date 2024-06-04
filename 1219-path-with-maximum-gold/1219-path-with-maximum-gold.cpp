class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int maxGold = 0;

        for(int i =0; i<n; i++) {
            for(int j= 0; j<m; j++) {
                if(grid[i][j] != 0) {
                    maxGold = max(maxGold, dfs(grid, i ,j, visited));
                }
            }
        }
        return maxGold;
}

    int dfs(vector<vector<int>> &grid, int i, int j, vector<vector<int>> &visited) {
        if (i<0 || j<0 || i>= grid.size() || j>=grid[0].size() || grid[i][j] == 0 || visited[i][j]== 1){
        return 0;
        }

    visited[i][j] =1;

    int currGold = grid[i][j];

    int up = dfs(grid, i-1, j, visited);
    int right= dfs(grid, i, j+1, visited);
    int left= dfs(grid, i, j-1, visited);
    int down= dfs(grid, i+1, j, visited);

    visited[i][j]= 0;

    return currGold + max({up, right, left, down});
}
};
