#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n > 100) n -= 10;
    cout << n << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
