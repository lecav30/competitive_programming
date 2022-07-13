#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    int arr[n], bi, li;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            bi = i;
        if (arr[i] == n)
            li = i;
    }

    if (bi == 0 && li == n - 1)
        cout << 0 << endl;
    else
    {

        int liD = n - 1 - li;
        int biD = bi;
        int swaps = liD + biD;

        // cout << liD << " " << biD << endl;

        if (biD - liD <= 0)
            swaps -= 1;

        cout << swaps << endl;
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
