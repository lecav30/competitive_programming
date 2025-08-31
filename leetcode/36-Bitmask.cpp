class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9] = {0}, cols[9] = {0}, boxes[9] = {0}; // bitmask

        for (int r = 0; r < 9; ++r) {     // rows
            for (int c = 0; c < 9; ++c) { // cols
                char ch = board[r][c];
                if (ch == '.')
                    continue;

                int v = ch - '1';  // convert value to 0..8
                int mask = 1 << v; // get the bit e.g.: '4' is v=3, so 1 << 3
                                   // when 1 is 00001, is now: 01000
                int b = (r / 3) * 3 + (c / 3); // get the sub-box index 0..8

                // check if the bit exist in some row, col or sub-box
                if ((rows[r] & mask) || (cols[c] & mask) || (boxes[b] & mask))
                    return false;

                // if not mark it
                rows[r] |= mask; // if rows[0] = 00000 now: rows[0] = 00000 |
                                 // 01000 which is: 01000
                cols[c] |= mask;
                boxes[b] |= mask;
            }
        }
        return true;
    }
};
