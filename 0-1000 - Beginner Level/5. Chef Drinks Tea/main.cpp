#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x <= y) cout << z << endl;
    else {
        float n = (float)x / y;
        auto round = [] (float n) -> int {
            if (n > int(n)) return int(n) + 1;
            else return int(n);
        };
        cout << round(n) * z << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
