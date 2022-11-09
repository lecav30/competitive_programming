#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    if (n % 7 == 0 || n % 2 == 0)
        cout << "YES" << endl;
    else
    {
        bool ok = false;

        for (int i = 7; i <= n && ok == false; i += 7)
            if ((n % i) % 2 == 0)
                ok = true;

        for (int i = 2; i <= n && ok == false; i += 2)
            if ((n % i) % 7 == 0)
                ok = true;

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
