#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    ll ans = -1;
    // ans % a == 0
    // ans % b != 0
    // ans >= n
    if (a != b)
    {
        /* for (ll i = (n / a) * a; ans == -1; i += a) */
        /* { */
        /*     if (i % b != 0 && i >= n) */
        /*         ans = i; */
        /* } */
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
