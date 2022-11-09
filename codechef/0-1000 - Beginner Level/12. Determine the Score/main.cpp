#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x, n;
    cin >> x >> n;
    cout << (x / 10) * n << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
