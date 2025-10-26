class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, monday = 1, add = 1;
        for (int i = 1; i <= n; ++i) {
            if (i % 7 == 1) {
                ans += monday;
                monday++;
                add = monday;
            } else {
                ans += add;
                add++;
            }
        }
        return ans;
    }
};
