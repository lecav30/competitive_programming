#include <iostream>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
