#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v)
        cin >> i;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        if (v[i + 1] - v[i] > 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    // solve();
    return 0;
}