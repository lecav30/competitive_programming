#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n, y;
    cin >> n >> y;
    int a, ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        ans |= a;
    }
    if (ans > y || (y | ans) != y) {
        print(-1);
        return;
    }
    print(ans ^ y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    /* solve(); */
    return 0;
}
