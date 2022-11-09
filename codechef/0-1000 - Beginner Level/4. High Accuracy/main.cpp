#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x;
    cin >> x;
    if (x % 3 == 0)
        cout << 0 << endl;
    else {
        if (x % 3 == 1) cout << 2 << endl;
        if (x % 3 == 2) cout << 1 << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
