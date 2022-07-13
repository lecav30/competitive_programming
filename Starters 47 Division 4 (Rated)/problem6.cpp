#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    map<int, int> h;
    for (int i = 0; i < n; ++i)
    {
        int height;
        cin >> height;
        if (h.count(height))
            h[height]++;
        else
            h[height] = 1;
    }
    int swaps = 0;
    for (auto e : h)
    {
        if (e.second == 1)
            swaps++;
    }
    if (swaps == 0)
        cout << 0 << endl;
    else
    {
        if (swaps % 2 != 0)
            swaps = (swaps / 2) + 1;
        else
            swaps = swaps / 2;
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
