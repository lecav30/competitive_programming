class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n + 1, 0); // to use from day 1 instead of manage 0
        dp[1] = 1;
        long long share = 0, MOD = 1000000007;
        for (int t = 2; t <= n; t++) {
            if (t - delay > 0)
                share = (share + dp[t - delay] + MOD) % MOD;
            if (t - forget > 0)
                share = (share - dp[t - forget] + MOD) % MOD;
            dp[t] = share;
        }
        long long know = 0;
        // people aware of secret from day n-forget to day n
        for (int i = n - forget + 1; i <= n; i++)
            know = (know + dp[i]) % MOD;
        return (int)know;
    }
};
