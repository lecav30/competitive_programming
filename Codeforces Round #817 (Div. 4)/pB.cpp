#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ENDL << "\n"
#define IN cin >>
#define OUT cout <<
#define JL cout << endl
#define MAXN 1000000
#define MOD 1000000007

void solve() {
    int n;
    IN n;
    char up[n], down[n];
    for (int i = 0; i < n; ++i) IN up[i];
    for (int i = 0; i < n; ++i) IN down[i];
    bool dif = false;
    for (int i = 0; i < n && !dif; ++i) {
        if (up[i] != down[i]) {
            if ((up[i] == 'G' && down[i] == 'B') ||
                    (up[i] == 'B' && down[i] == 'G'))
                dif = false;
            else dif = true;
        }
    }
    OUT (dif ? "NO" : "YES") ENDL;
}

int main() {
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
