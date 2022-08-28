#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ll long long
#define ENDL << "\n"
#define IN cin >>
#define OUT cout <<
#define JL cout << "\n"
#define MOD 1000000007
#define MAXN 1000000

void solve() {
    int n, k;
    IN n >> k;
    string s;
    IN s;

    vector<int> pre(n + 1);

    if (s[0] == '1') {
        pre[0]++;
        pre[k]--;
        s[0] = '0';
    }

    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + pre[i];
        if (pre[i] & 1) {
            if (s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';
        }
        if (s[i] == '1' && i <= (n - k)) {
            pre[i]++;
            pre[i + k]--;
            s[i] = '0';
        }
    }

    OUT s ENDL;
}

int main() {
    fastio;
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
