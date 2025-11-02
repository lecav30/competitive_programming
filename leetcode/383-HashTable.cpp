class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::map<char, int> ransom;
        std::map<char, int> maga;
        for (char& c : ransomNote) {
            if (ransom.count(c))
                ransom[c]++;
            else
                ransom[c] = 0;
        }
        for (char& c : magazine) {
            if (maga.count(c))
                maga[c]++;
            else
                maga[c] = 0;
        }

        for (auto pair : ransom) {
            if (maga.count(pair.first)) {
                if (ransom[pair.first] > maga[pair.first])
                    return false;
            } else
                return false;
        }
        return true;
    }
};
