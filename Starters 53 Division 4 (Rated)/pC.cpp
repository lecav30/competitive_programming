#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define IN cin >>
#define OUT cout <<

void solve() {
    int n;
    IN n;
    ll A[n];
    ll B[n];
    for (int i = 0; i < n; ++i) IN A[i];
    for (int i = 0; i < n; ++i) IN B[i];
    ll difA = 0, difB = 0;
    for (int i = 0; i < n; ++i) {
        if (A[i] != B[i]) {
            ll dif = A[i] - B[i];
            if (dif > 0)
                difA += dif;
            else
                difB += abs(dif);
        }
    }
    OUT(difA == difB ? difA : -1) << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
