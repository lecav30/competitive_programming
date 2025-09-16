class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        int n = s.length();
        int mid = n / 2;
        string s1 = s.substr(0, mid);
        string s2 = s.substr(n % 2 == 0 ? mid : mid + 1, n);
        reverse(s2.begin(), s2.end());
        return s1 == s2;
    }
};
