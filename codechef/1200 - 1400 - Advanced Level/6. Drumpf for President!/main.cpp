#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> v(n);
    for (auto &i : a) cin >> i;
    for (auto &i : v) i = 0;

    for (int i = 0; i < n; ++i)
        if (a[i] != (i + 1)) v[a[i] - 1]++;
    for (int i = 0; i < n; ++i)
        if (a[i] == (i + 1)) v[a[i] - 1] = 0;

    int ans = 0;
    for (auto &i : v)
        if (i >= k) ans++;
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
