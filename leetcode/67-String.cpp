class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        const string& minStr = (a.length() < b.length()) ? a : b;
        const string& maxStr = (a.length() < b.length()) ? b : a;
        int res = 0;
        string ans;
        for (int i = 0; i < maxStr.length(); ++i) {
            if (i <= minStr.length() - 1) {
                int sum = (minStr[i] - '0') + (maxStr[i] - '0') + res;
                if (sum == 3) {
                    res = 1;
                    ans += "1";
                } else if (sum == 2) {
                    res = 1;
                    ans += "0";
                } else {
                    ans += (sum + '0');
                    res = 0;
                }
            } else {
                int sum = (maxStr[i] - '0') + res;
                if (sum == 3) {
                    res = 1;
                    ans += "1";
                } else if (sum == 2) {
                    res = 1;
                    ans += "0";
                } else {
                    ans += (sum + '0');
                    res = 0;
                }
            }
        }
        if (res)
            ans += "1";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
