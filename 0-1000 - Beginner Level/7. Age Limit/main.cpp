#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x, y, a;
    cin >> x >> y >> a;
    if (a >= x && a < y) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
