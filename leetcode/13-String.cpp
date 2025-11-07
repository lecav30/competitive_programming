class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        s += ' ';
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (c == 'M')
                ans += 1000;
            if (c == 'D')
                ans += 500;
            if (c == 'C') {
                if (s[i + 1] == 'D') {
                    ans += 400;
                    i++;
                } else if (s[i + 1] == 'M') {
                    ans += 900;
                    i++;
                } else
                    ans += 100;
            }
            if (c == 'L')
                ans += 50;
            if (c == 'X') {
                if (s[i + 1] == 'L') {
                    ans += 40;
                    i++;
                } else if (s[i + 1] == 'C') {
                    ans += 90;
                    i++;
                } else
                    ans += 10;
            }
            if (c == 'V')
                ans += 5;
            if (c == 'I') {
                if (s[i + 1] == 'V') {
                    ans += 4;
                    i++;
                } else if (s[i + 1] == 'X') {
                    ans += 9;
                    i++;
                } else
                    ans += 1;
            }
        }
        return ans;
    }
};
