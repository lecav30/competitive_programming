#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for (char c : s)
        if (c == '0')
            zeros++;
        else
            ones++;
    if (zeros == s.length() - 1 || ones == s.length() - 1) {
        cout << "Yes\n";
        return;
    }
    cout << "No\n";
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