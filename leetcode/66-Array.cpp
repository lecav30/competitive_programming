class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        // This could be remove
        if (digits[digits.size() - 1] + 1 <= 9) {
            digits[digits.size() - 1]++;
            return digits;
        }

        reverse(digits.begin(), digits.end());

        int res = true;
        for (int i = 0; i < digits.size() && res; ++i) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                res = false;
            }
        }

        if (res) {
            digits.push_back(1);
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};
