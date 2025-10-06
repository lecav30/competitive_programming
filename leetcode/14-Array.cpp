class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";

        string ans = "";
        int n = strs[0].length();

        for (auto s : strs)
            n = min(n, (int)s.length());

        for (int i = 0; i < n; ++i) {
            int c = strs[0][i];
            for (auto s : strs) {
                if (s[i] != c)
                    return ans;
            }
            ans += c;
        }

        return ans;
    }
};
