class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        nums.push_back(0);
        vector<int> ones;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1)
                ones.push_back(i);
        }
        if (ones.empty()) return true;
        for (int i = 0; i < ones.size() - 1; ++i) {
            if ((ones[i + 1] - ones[i] - 1) < k)
                return false;
        }
        return true;
    }
};
