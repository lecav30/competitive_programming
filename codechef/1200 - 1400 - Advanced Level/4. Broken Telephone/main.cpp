#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &i : vec) cin >> i;
    int ans = 0;
    for (int i = 1; i < n - 1; ++i)
        if (vec[i] != vec[i + 1] || vec[i] != vec[i - 1]) ans++;
    if (vec[n - 1] != vec[n - 2]) ans++;
    if (vec[0] != vec[1]) ans++;
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
