class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, sum = 0, maxTime = INT_MIN;
        colors += ' ';
        for (int i = 0; i < colors.size() - 1; ++i) {
            sum += neededTime[i];
            if (colors[i] == colors[i + 1]) {
                maxTime = max(maxTime, neededTime[i]);
            } else {
                if (maxTime != INT_MIN) {
                    maxTime = max(maxTime, neededTime[i]);
                    ans += sum - maxTime;
                    maxTime = INT_MIN;
                }
                sum = 0;
            }
        }
        return ans;
    }
};
