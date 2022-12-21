#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n > 98) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
