class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.begin(), happiness.end());
        reverse(happiness.begin(), happiness.end());

        for (int i = 0; i < happiness.size() && k > 0; ++i) {
            if (happiness[i] - i < 0) break;
            ans += happiness[i] - i;
            k--;
        }

        return ans;
    }
};
