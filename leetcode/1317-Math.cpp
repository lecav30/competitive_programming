class Solution {
public:
    bool haveZero(int n) {
        while (n > 0) {
            if (n % 10 == 0) return true;
            n /= 10;
        }
        return false;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        for (int i=1; i < n; ++i) {
            if (haveZero(n - i) || haveZero(i)) continue;
            return {i, n - i};
        }
        return {};
    }
};
