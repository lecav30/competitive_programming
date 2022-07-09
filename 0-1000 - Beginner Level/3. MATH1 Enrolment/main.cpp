#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x, y;
    cin >> x >> y;
    if (x >= y) cout << 0 << endl;
    else cout << y - x << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
