class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int prefix = 0;
        vector<bool> ans;
        ans.reserve(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            prefix = ((prefix << 1) + nums[i]) % 5;
            ans.push_back(prefix == 0);
        }
        return ans;
    }
};
