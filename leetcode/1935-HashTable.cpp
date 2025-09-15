class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26] = { false };
        for (char b : brokenLetters) broken[b - 'a'] = true;

        int count = 0;
        bool wordHasBroken = false;
        for (size_t i = 0; i < text.size(); ++i) {
            char c = text[i];
            if (c == ' ') {
                if (!wordHasBroken) ++count;
                wordHasBroken = false;
            } else {
                if (!wordHasBroken && broken[c - 'a']) wordHasBroken = true;
            }
        }
        if (!wordHasBroken) ++count;
        return count;
    }
};
