class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        // 1) sort by x asc, then y desc
        sort(points.begin(), points.end(),
             [](const vector<int>& a, const vector<int>& b){
                 if (a[0] != b[0]) return a[0] < b[0];
                 return a[1] > b[1]; // y desc on tie
             });

        int ans = 0;

        // 2) for each i, scan j>i with a running maxY
        for (int i = 0; i < points.size(); ++i) {
            int yi = points[i][1];
            int maxY = INT_MIN;
            for (int j = i + 1; j < points.size(); ++j) {
                int yj = points[j][1];
                // A (xi, yi) have to be "uper left" on B (xj, yj)
                // We allow yi >= yj
                // uper or left && is greater than maxY (heightest point)
                if (yi >= yj && yj > maxY) {
                    ++ans;
                    maxY = yj;
                }
            }
        }
        return ans;
    }
};
