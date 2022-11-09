#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    int p = n / (k * m);
    if (p * k * m < n)
        cout << p + 1 << endl;
    else
        cout << p << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
