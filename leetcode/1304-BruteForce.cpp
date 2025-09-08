class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        ans.reserve(n);
        for (int k = 1; k <= n/2; ++k) {
            ans.push_back(k);
            ans.push_back(-k);
        }
        if (n % 2 == 1) ans.push_back(0); // add zero on odd input
        return ans;
    }
};
