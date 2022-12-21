#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    int s = a + b;
    if (s & 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
