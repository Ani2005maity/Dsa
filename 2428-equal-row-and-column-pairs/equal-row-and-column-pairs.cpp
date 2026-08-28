class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        for (int i = 0; i < grid.size(); i++) {
            vector<int> col;
            for (int j = 0; j < grid[i].size(); j++) {
                col.push_back(grid[j][i]);
            }
            mp[col]++;
        }
        int count = 0;
        for (auto row : grid) {
            if(mp.find(row) != mp.end()){
                count += mp[row];
            }
        }
        return count;
    }
};