#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<

void solve() {
    int board[8][8] = {0};
    int x, y;
    IN x >> y;
    x--;
    y--;
    board[x][y] = 1;
    if (x == 0 || y == 0 || x == 7 || y == 7) {
        bool corner = false;
        // Esquinas
        if (x == 0 && y == 0) {
            corner = true;
            board[2][1] = 2;
        }
        if (x == 0 && y == 7) {
            corner = true;
            board[2][6] = 2;
        }
        if (x == 7 && y == 0) {
            corner = true;
            board[5][1] = 2;
        }
        if (x == 7 && y == 7) {
            corner = true;
            board[5][6] = 2;
        }
        // Bordes
        if (x == 0 && !corner) board[2][y - 1] = board[2][y + 1] = 2;
        if (x == 7 && !corner) board[5][y - 1] = board[5][y + 1] = 2;
        if (y == 0 && !corner) board[x - 1][2] = board[x + 1][2] = 2;
        if (y == 7 && !corner) board[x - 1][5] = board[x + 1][5] = 2;
    } else if (x == 1 || y == 1 || x == 6 || y == 6) {
        // Adyacente a los bordes
        bool done = false;
        if (x == 1) {
            if (y + 3 > 7)
                board[x - 1][y - 3] = board[x + 2][y + 1] = 2;
            else
                board[x - 1][y + 3] = board[x + 2][y - 1] = 2;
            done = true;
        }
        if (x == 6) {
            if (y + 3 > 7)
                board[x + 1][y - 3] = board[x - 2][y + 1] = 2;
            else
                board[x + 1][y + 3] = board[x - 2][y - 1] = 2;
            done = true;
        }
        if (y == 1 && !done) {
            if (x + 3 > 7)
                board[x - 3][y - 1] = board[x + 1][y + 2] = 2;
            else
                board[x + 3][y - 1] = board[x - 1][y + 2] = 2;
        }
        if (y == 6 && !done) {
            if (x + 3 > 7)
                board[x - 3][y + 1] = board[x + 1][y - 2] = 2;
            else
                board[x + 3][y + 1] = board[x - 1][y - 2] = 2;
        }
    } else
        board[x - 1][y + 2] = board[x + 1][y - 2] = 2;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
