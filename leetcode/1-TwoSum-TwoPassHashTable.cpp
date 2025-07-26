class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Save diff results
        std::unordered_map<int, int> diff;
        for (int i = 0; i < nums.size(); ++i) {
            diff.insert({target - nums[i], i});
        }
        // Check if the diff exist in the map, if exist and index is different
        // return answer
        for (int i = 0; i < nums.size(); ++i) {
            if (diff.find(nums[i]) != diff.end()) {
                if (diff.at(nums[i]) != i) return {i, diff[nums[i]]};
            }
        }
        return {};
    }
};
