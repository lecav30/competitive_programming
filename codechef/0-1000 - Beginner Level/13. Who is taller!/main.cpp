#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x, y;
    cin >> x >> y;
    cout << (max(x, y) == x ? "A" : "B") << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
