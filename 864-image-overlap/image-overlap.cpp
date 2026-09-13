class Solution {
public:
    int countOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (img1[i][j] == 1 && img2[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxct = 0;
        for (int rowShift = -(n - 1); rowShift <= n - 1; rowShift++) {
            for (int colShift = -(n - 1); colShift <= n - 1; colShift++) {
                int count = 0;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        int x = i + rowShift;
                        int y = j + colShift;
                        if (x >= 0 && x < n && y >= 0 && y < n) {
                            if (img1[i][j] == 1 && img2[x][y] == 1) {
                                count++;
                            }
                        }
                    }
                }
                maxct = max(maxct, count);
            }
        }
        return maxct;
    }
};