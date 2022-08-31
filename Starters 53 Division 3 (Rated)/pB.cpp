#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define IN cin >>
#define OUT cout <<

void solve() {
    ll n;
    IN n;
    if (n & 1)
        OUT 2 * (n - (n / 2)) * (n / 2) << endl;
    else
        OUT 2 * (n / 2) * (n / 2) << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
