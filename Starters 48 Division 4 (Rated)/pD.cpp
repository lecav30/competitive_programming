#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int r, c;
    cin >> r >> c;
    if (c % 2 == 0 && r % 2 == 0)
        cout << 0 << endl;
    else if (c % 2 != 0 && r % 2 != 0)
        cout << c + r - 1 << endl;
    else // if (c % 2 == 0 || r % 2 == 0)
        if (c % 2 == 0)
            cout << c << endl;
        else
            cout << r << endl;
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
