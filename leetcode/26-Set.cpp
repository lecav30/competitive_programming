class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::set<int> uniqueNums(nums.begin(), nums.end());

        int i = 0;
        for (auto val : uniqueNums)
            nums[i++] = val;

        return uniqueNums.size();
    }
};
