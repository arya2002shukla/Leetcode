class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size(), res = 0;
        for (int i = 0; i < n; i += 1)
            for (int j = 0; j < n; j += 1) {
                int ok = 1;
                for (int k = 0; k < n and ok; k += 1)
                    ok = grid[i][k] == grid[k][j];
                res += ok;
            }
        return res;
    }
};