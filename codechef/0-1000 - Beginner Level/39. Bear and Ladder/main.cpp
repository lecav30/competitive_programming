#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (b == a - 2 || b == a + 2) {
        cout << "YES\n";
    } else {
        if (((a & 1) && (b == a + 1)) || (!(a & 1) && (b == a - 1))) {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
