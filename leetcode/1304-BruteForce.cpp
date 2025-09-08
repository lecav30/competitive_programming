class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int i = n / 2 * -1;
        while (ans.size() < n) {
            if (i == 0 && n % 2 == 0) {
                ++i;
                continue;
            } // even
            ans.push_back(i);
            ++i;
        }
        return ans;
    }
};
