class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for (auto s: sentences) {
            int amount = 0;
            stringstream ss(s);
            string word;
            while(getline(ss, word, ' ')) {
                amount++;
            }
            ans = max(amount, ans);
        }
        return ans;
    }
};
