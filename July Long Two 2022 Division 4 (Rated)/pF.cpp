#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a = n, b = n;
    int maximized = 0;
    for (int i = n; i < m; ++i)
    {
        if (maximized >= m - i)
            break;
        for (int j = m; j > i; --j)
        {
            if ((i % n == 0 && j % n == 0) || j % i == 0)
            {
                if (abs(i - j) > maximized)
                {
                    maximized = abs(i - j);
                    a = i;
                    b = j;
                    break;
                }
            }
        }
    }
    cout << a << " " << b << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
