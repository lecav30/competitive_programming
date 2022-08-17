#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    ll res = arr[0];
    for (int i = 1; i < n; ++i) res = __gcd(res, arr[i]);
    cout << res * (ll)n << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
}
