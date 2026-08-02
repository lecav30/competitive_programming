class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int eq = 0;
        vector<int> newNums;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums.at(i) == val) {
                eq++;
            } else {
                newNums.push_back(nums[i]);
            }
        }
        for (int i =0; i< eq;++i) newNums.push_back(val);
        nums = newNums;
        return nums.size() - eq;
    }
};
