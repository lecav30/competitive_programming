#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (auto &i : s) cin >> i;
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
        int w = 0;
        for (int j = 0; j < n; ++j) {
            /* cout << (int)(s[j][i] - '0') << " "; */
            w ^= (int)(s[j][i] - 48);
        }
        ans += w;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
