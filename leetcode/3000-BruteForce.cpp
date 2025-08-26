class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        // we can use int 'cause the numbers are 1 <= x <= 100
        int bestLen2 = -1, bestArea = 0;
        for (auto& d : dimensions) {
            int x = d[0], y = d[1];
            // use int to avoid problems with decimal points in double
            // without use square root
            int len2 = x * x + y * y;
            int area = (int)(x * y);
            if (len2 > bestLen2) {
                bestLen2 = len2;
                bestArea = area;
            } else if (len2 == bestLen2 && area > bestArea) {
                bestArea = area;
            }
        }
        return bestArea;
    }
};
