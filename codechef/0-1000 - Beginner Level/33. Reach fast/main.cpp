#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    int maxi = max(x, y), mini = min(x, y);
    int dif = maxi - mini;
    if (dif % k) cout << (dif / k) + 1 << "\n";
    else cout << (dif / k) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
