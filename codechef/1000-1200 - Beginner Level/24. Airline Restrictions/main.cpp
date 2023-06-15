#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w[3];
    for (int i = 0; i < 3; ++i) cin >> w[i];
    int check_in, carried;
    cin >> check_in >> carried;
    sort(w, w + 3);
    do {
        if (w[0] <= carried && (w[1] + w[2]) <= check_in) {
            cout << "YES\n";
            return;
        }
    } while (next_permutation(w, w + 3));
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
