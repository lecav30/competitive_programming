#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

void solve() {
    int n;
    cin >> n;
    map<char, int> ch;

    while (n--) {
        string s;
        cin >> s;

        string cc = "codechef";
        for (char c : s)
            // determinate if the character belongs to the string
            if (cc.find(c) != string::npos)
                if (ch.count(c) > 0)
                    ch[c]++;
                else
                    ch[c] = 1;
    }

    cout << min({ch['c'] / 2, ch['o'], ch['d'], ch['e'] / 2, ch['h'], ch['f']}) << "\n";
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