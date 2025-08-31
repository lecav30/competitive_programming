class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // check row
        for (auto& arr : board) {
            set<char> s;
            for (auto& e : arr) {
                if (e == '.')
                    continue;
                if (s.find(e) == s.end())
                    s.insert(e);
                else
                    return false;
            }
        }

        // check col
        for (int i = 0; i < board.size(); ++i) { // columns
            set<char> s;
            for (int j = 0; j < board[i].size(); ++j) { // rows
                if (board[j][i] == '.')
                    continue;
                if (s.find(board[j][i]) == s.end())
                    s.insert(board[j][i]);
                else
                    return false;
            }
        }

        // check sub-boxes
        for (int i = 0; i < board.size(); i += 3) {        // rows
            for (int j = 0; j < board[i].size(); j += 3) { // columns
                // check sub-box
                set<char> s;
                for (int r = i; r < i + 3; ++r) {
                    for (int c = j; c < j + 3; ++c) {
                        if (board[r][c] == '.')
                            continue;
                        if (s.find(board[r][c]) == s.end())
                            s.insert(board[r][c]);
                        else
                            return false;
                    }
                }
            }
        }

        return true;
    }
};
