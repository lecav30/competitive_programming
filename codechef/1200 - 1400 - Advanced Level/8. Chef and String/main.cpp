#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    string s;
    cin >> s;
    string left = s.substr(1, s.size() - 1) + s[0];
    string right = s[s.size() - 1] + s.substr(0, s.size() - 1);
    cout << (left == right ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    // solve();
    return 0;
}