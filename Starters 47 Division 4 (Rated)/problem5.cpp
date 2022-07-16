#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1], id1, idn;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            id1 = i;
        if (arr[i] == n)
            idn = i;
    }

    if (id1 < idn)
        cout << id1 + n - 1 - idn << endl;
    else
        cout << id1 + n - 1 - idn - 1 << endl;
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
