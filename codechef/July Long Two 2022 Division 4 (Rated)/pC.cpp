#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int x, y, n, r;
    cin >> x >> y >> n >> r;
    if (x * n > r)
        cout << -1 << endl;
    else
    {
        int temp = (r - x * n) / (y - x);
        // cout << "temp " << temp << endl;
        if (temp > n)
        {
            temp = n;
        }
        cout << n - temp << " " << temp << endl;
    }
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
