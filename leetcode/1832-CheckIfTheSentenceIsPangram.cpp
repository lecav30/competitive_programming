class Solution {
public:
    bool checkIfPangram(string sentence) {
        // Information
        /*
        A pangram sentence have to have every lower letter of English alphabet
        */
        // Questions
        /*
        It can be solved just by doing a for?
        */
        // Solution
        bool isPangram = false;
        if (sentence.length() < 26) return isPangram;
        // alphabet
        int alp[26];
        // fill with zeros to count later
        memset(alp, 0, sizeof(alp));

        // add to the arr
        for (int i=0; i<sentence.length(); ++i)
            alp[int(sentence[i] - 'a')]++;

        // check if are every lower english letter
        for (int i=0; i<26; ++i)
            if (alp[i] == 0) return isPangram;
        isPangram = true;
        return isPangram;
    }
};
