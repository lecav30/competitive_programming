#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int co = 0, cz = 0;
    for (int i = 0; i < n; ++i)
        s[i] == '1' ? co++ : cz++;
    // cout << co << " " << cz << endl;
    if (k >= n)
    {
        if (cz != co)
            cout << 1 << endl;
        else if (cz == co)
            cout << 0 << endl;
    }
    else
    {
        int dif = abs(co - cz);
        if (dif == 0)
            cout << 0 << endl;
        else
        {
            if (k >= dif)
                cout << 1 << endl;
            else
            {
                if (dif % k != 0)
                    cout << (dif / k) + 1 << endl;
                else
                    cout << dif / k << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
