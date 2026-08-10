class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        const string& minStr = (a.length() < b.length()) ? a : b;
        const string& maxStr = (a.length() < b.length()) ? b : a;

        int carry = 0;
        string ans;

        for (int i = 0; i < maxStr.length(); ++i) {
            int minDigit = 0;

            // Just need to check the minDigit value when i is less than minStr length
            if (i < minStr.length()) {
                minDigit = minStr[i] - '0';
            }

            int maxDigit = maxStr[i] - '0';
            int sum = minDigit + maxDigit + carry;

            // Better than the if because the sums are already mapped: 0 1 2 3
            // so you can use the mod of 2 to avoid comparison
            ans += (sum % 2) + '0';
            carry = sum / 2;
        }

        if (carry) {
            ans += '1';
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
