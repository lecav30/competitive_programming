#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    vector<int> B(n);
    for (int i = 0; i < n; ++i) cin >> B[i];
    int ans = 0;
    for (int i = 0; i < n; ++i)
        if (A.at(i) >= x) ans += B.at(i);
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
