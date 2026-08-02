class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); ++i) {
            if (haystack[i] == needle[0]) {
                string substr = haystack.substr(i, needle.length());
                if (substr == needle) return i;
            }
        }
        return -1;
    }
};
