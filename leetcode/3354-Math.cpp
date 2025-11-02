class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int sum = 0;
        for (auto n : nums)
            sum += n;

        int ans = 0, left = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                if (left == sum - left)
                    ans += 2;
                else if (abs(left - (sum - left)) == 1)
                    ans++;
            }
            left += nums[i];
        }
        return ans;
    }
};
