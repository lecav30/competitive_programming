class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        if (n == 0)
            return 0;
        int m = grid[0].size();

        int minRow = INT_MAX, maxRow = INT_MIN;
        int minCol = INT_MAX, maxCol = INT_MIN;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    // get the min and max (extreme points)
                    // each point which form a rectangle
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        if (minRow == INT_MAX)
            return 0; // no hay 1's

        int heigh = maxRow - minRow + 1;
        int width = maxCol - minCol + 1;
        return heigh * width;
    }
};
