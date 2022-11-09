#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1) {
        string s1 = s.substr(0, n / 2);
        string s2 = s.substr(n / 2 + 1, n / 2);
        if (s1 == s2) {
            cout << "YES\n";
            return;
        }
    } else {
        string s1 = s.substr(0, n / 2);
        string s2 = s.substr(n / 2, n / 2);
        if (s1 == s2) {
            cout << "YES\n";
            return;
        }
    }
    int cz = 0, co = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1')
            co++;
        else
            cz++;
    }
    if (!(co & 1) || !(cz & 1))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
