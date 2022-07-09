#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int sf = x + 2 * y;
    if (sf <= n)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
