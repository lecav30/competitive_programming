class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        // Just works 'cause -> s.length <= 5 * 10^4
        for (int i=0; i<s.length(); ++i) {
            set<int> list;
            for (int j=i; j<s.length(); ++j) {
                if (list.find(s[j]) == list.end()) {
                    list.insert(s[j]);
                }
                else {
                    break;
                }
            }
            if (list.size() > ans) ans = list.size();
        }
        return ans;
    }
};
