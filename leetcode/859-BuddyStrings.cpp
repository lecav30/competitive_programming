class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // Information:
        /*
        Length of s must to be equal to Length of goal to make the comparison
        We need to do one change always
        It's necessary to find only two diffs
        Both are strings
        */
        // Questions:
        /*
        How would I know when a string is made up for the same character?
        Is it necessary use a for?
        */
        // Solution
        // Easy answer is just compare and do iterations
        int diffs = 0;
        int first_diff = -1;
        int second_diff = -1;

        if (s.length() != goal.length()) return false;
        
        if (s == goal) {
            // if it's more than 2 you can swap the similars
            if (s.length() > 2) {
                // also you need to check if the elements of the string are all diferents,
                // in that case you cannt make the change
                int alphabet[27];
                for (int i=0; i < s.length(); i++) {
                    alphabet[(s[i] - 'a')]++;
                    if (alphabet[(s[i] - 'a')] >= 2) return true;
                }
            }
            else {
                // when length it's two and the string is made up for the same
                // character you can swap that elements
                if (s[0] == s[1]) return true;
            }
        } 

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != goal[i]) {
                diffs++;
                first_diff == -1 ? first_diff = i : second_diff = i;
            }
        }
        if (diffs > 2)
            return false;
        if (first_diff == -1 || second_diff == -1)
            return false;
        char temp = s[first_diff];
        s[first_diff] = s[second_diff];
        s[second_diff] = temp;
        if (s == goal)
            return true;
        else
            return false;
    }
};
