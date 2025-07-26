class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> diff;
        // Generate hashmap meanwhile we're on the loop
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0) {
                diff.insert({target - nums[i], i});
            }
            else {
                if (diff.find(nums[i]) != diff.end() && diff.at(nums[i]) != i) {
                    return {i, diff[nums[i]]};
                } else {
                    diff.insert({target - nums[i], i});
                }
            } 
        }
        return {};
    }
};
