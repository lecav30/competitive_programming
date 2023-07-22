#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
typedef long long ll;

void solve() {
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    vector<vector<int>> board(9, vector<int>(9, 0));
    for (int i = 1; i <= 8; ++i)
        for (int j = 1; j <= 8; ++j)
            if (!((i + j) & 1)) board[i][j] = 1;

    if (a == p && b == q) {
        cout << 0 << endl;
        return;
    }
    if (board[a][b] != board[p][q])
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
