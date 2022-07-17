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

    int maxHeight = (--h.end())->first;
    int incs = 0;
    int incMaxHeight = 0;

    for (auto e : h)
    {
        if (e.second == 1 && e.first != maxHeight)
            incs++;
        else if (e.second == 1 && e.first == maxHeight)
            incMaxHeight = 1;
    }

    if (incs == 0 && incMaxHeight == 1)
    {
        bool gGre2 = false;
        for (auto e : h)
        {
            if (e.second >= 3)
            {
                gGre2 = true;
                break;
            }
        }
        if (gGre2)
            incs += 1;
        else
            incs += 2;
    }
    else
    {
        incs += incMaxHeight;
        if (incs % 2 != 0)
            incs = (incs / 2) + 1;
        else
            incs = incs / 2;
    }
    cout << incs << endl;
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
