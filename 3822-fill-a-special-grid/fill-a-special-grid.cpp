class Solution {
public:
    void solve(vector<vector<int>>& grid, int r, int c, int size, int& val) {
        if(size == 1) {
            grid[r][c] = val++;
            return;
        }

        int half = size / 2;
        solve(grid, r, c + half, half, val);
        solve(grid, r + half, c + half, half, val);
        solve(grid, r + half, c, half, val);
        solve(grid, r, c, half, val);
    }

    vector<vector<int>> specialGrid(int n) {
        int size = 1 << n;

        vector<vector<int>> grid(size, vector<int>(size));

        int val = 0;

        solve(grid, 0, 0, size, val);

        return grid;
    }
};