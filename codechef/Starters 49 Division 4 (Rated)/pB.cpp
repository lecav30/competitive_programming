#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(a, b) + max(c, d) << endl;
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
