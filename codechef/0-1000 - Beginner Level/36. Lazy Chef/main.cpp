#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int x, m, d;
    cin >> x >> m >> d;
    cout << min(x * m, x + d) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
