#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<

void solve() {
    int n, m;
    IN n >> m;
    bool possible = false;
    if (n % m == 0) {
        if (!((n / m) & 1)) possible = true;
    }
    OUT(possible ? "Yes\n" : "No\n");
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
