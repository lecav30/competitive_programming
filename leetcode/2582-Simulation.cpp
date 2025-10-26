class Solution {
public:
    int passThePillow(int n, int time) {
        if (time < n) return time + 1;
        else {
            int ans = 1;
            bool flag = true;
            for (int i = 0; i < time; ++i) {
                if (flag) ans++;
                else ans--;
                if (ans == n) flag = false;
                if (ans == 1) flag = true;
            }
            return ans;
        }
    }
};
