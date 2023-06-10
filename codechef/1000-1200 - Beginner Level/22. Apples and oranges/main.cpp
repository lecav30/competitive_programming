#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n, m;
    cin >> n >> m;
    cout << __gcd(n, m) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}