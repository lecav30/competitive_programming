#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    int normal = (n - k) * y + k * x;
    int redPls = n * x;
    cout << (normal <= redPls ? normal : redPls) << endl;
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
