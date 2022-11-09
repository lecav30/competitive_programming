#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int neg = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < 0) neg++;
        if (arr[i] == 0) zero++;
    }
    if (zero) {
        cout << 0 << "\n";
    } else {
        cout << (neg & 1 ? "1" : "0") << "\n";
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
