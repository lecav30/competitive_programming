class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::vector<int> ans;

        for (int i = 0; i < nums.size() - 1; ++i) {
            int a = nums.at(i);
            for (int j = i + 1; j < nums.size(); ++j) {
                int b = nums.at(j);
                if (a == b)
                    ans.push_back(a);
            }
        }
        return ans;
    }
};
