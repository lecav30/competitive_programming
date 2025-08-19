class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0, streak = 0;
        for (int x : nums) {
            // streak to simulate the zero streak which means
            // subarray with all zeros
            streak = (x == 0) ? (streak + 1) : 0;
            ans += streak;
        }
        return ans;
    }
};
