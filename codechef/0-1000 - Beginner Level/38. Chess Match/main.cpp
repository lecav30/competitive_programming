#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = (2*(180 + n) - a - b);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
