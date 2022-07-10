#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << ((a + b) % 2 == 0 ? "YES" : "NO") << endl;
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
