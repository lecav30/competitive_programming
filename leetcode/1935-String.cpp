class Solution {
public:
    vector<string> split(const string& s, char delimiter) {
        vector<string> tokens;
        string token;
        stringstream ss(s);
        while (getline(ss, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    int canBeTypedWords(string text, string brokenLetters) {
        int cannotType = 0;
        vector<string> words = split(text, ' ');
        set<char> letters;
        for (auto c : brokenLetters)
            letters.insert(c);
        for (auto word : words) {
            for (auto c : letters) {
                if (word.find(c) != string::npos) {
                    cannotType++;
                    break;
                }
            }
        }
        return words.size() - cannotType;
    }
};
