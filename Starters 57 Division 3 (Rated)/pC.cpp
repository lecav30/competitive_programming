#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a & 1 && b & 1)
        cout << "No\n";
    else {
        if (a & 1 || b & 1) {
            if (a == 1 || b == 1)
                cout << "No\n";
            else
                cout << "Yes\n";
        } else
            cout << "Yes\n";
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
