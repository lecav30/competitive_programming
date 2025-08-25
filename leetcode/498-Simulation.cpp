class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};

        int m = mat.size(); // rows
        int n = mat[0].size(); // columns

        vector<int> ans;
        ans.reserve(m * n);
        
        int i = 0, j = 0;
        bool up = true; // true: up right, false: down left
        
        while (i < m && j < n) {
            ans.push_back(mat[i][j]);

            int ni = up ? i - 1 : i + 1;
            int nj = up ? j + 1 : j - 1;
            
            if (ni < 0 || ni >= m || nj < 0 || nj >= n) {
                if (up) {
                    if (j + 1 < n) ++j; // move right
                    else ++i; // move down
                } else {
                    if (i + 1 < m) ++i; // move down
                    else ++j; // move right
                }
                up = !up;
            } else { // regular move
                i = ni;
                j = nj;
            }
        }
        return ans;
    }
};
