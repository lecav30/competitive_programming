#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int ans = 0, count = 0;
    vector<int> b(7, 0);
    for (auto &i : a) {
        if (i <= 7) {
            if (b[i - 1] == 0) {
                b[i - 1]++;
                count++;
            }
        }
        ans++;
        if (count >= 7) break;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    // solve();
    return 0;
}