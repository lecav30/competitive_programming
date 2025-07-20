class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force over all elements
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 1 + i; j < nums.size(); ++j) {
                // Check the rest from the last index plus one to cover
                // all coparison cases
                if (nums[j]  == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
