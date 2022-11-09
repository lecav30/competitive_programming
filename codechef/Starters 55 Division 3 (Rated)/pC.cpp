#include <bits/stdc++.h>
using namespace std;
#define IN cin >>
#define OUT cout <<

void solve() {
    int n, k;
    IN n >> k;
    int red = 1;
    bool can = 1;
    for (int i = 0; i < k; ++i) {
        n -= red;
        red++;
        if (n < 0) {
            can = 0;
            break;
        }
    }
    OUT(can ? "YES\n" : "NO\n");
}

int main() {
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
