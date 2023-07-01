#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    string s;
    cin >> s;
    int b = 0, mb = 0;
    for (char c : s) {
        if (c == '(')
            b++;
        else if (c == ')')
            b--;
        mb = max(mb, b);
    }
    for (int i = 0; i < mb; i++)
        cout << '(';
    for (int i = 0; i < mb; i++)
        cout << ')';
    cout << '\n';
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