class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        int n = grid.size();
        int a, b;
        int expsum = 0, actsum = 0;
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                actsum += grid[i][j];
                if(st.find(grid[i][j]) != st.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                st.insert(grid[i][j]);
            }
        }

        expsum = (n*n) * (n*n + 1) / 2;
        b = expsum + a - actsum;
        ans.push_back(b);
        return ans;
    }
};