#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int n_a = 0, n_b = 0, n_ab = 0, n_o = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if (s == "A") n_a++;
        if (s == "B") n_b++;
        if (s == "AB") n_ab++;
        if (s == "O") n_o++;
    }
    cout << (n_a > n_b ? n_o + n_a + n_ab : n_o + n_b + n_ab) << endl;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
