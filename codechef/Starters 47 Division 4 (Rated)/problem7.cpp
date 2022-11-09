#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    bool op1 = true;
    for (int i = n - 1; i >= 0; --i)
    {
        if (str.size() % 2 == 0)
        {
            int middle = str.size() / 2;
            if (str.substr(0, middle) == str.substr(middle))
            {
                str = str.substr(middle);
                i = middle;
                op1 = true;
                continue;
            }
        }
        if (op1)
        {
            str = str.substr(0, i);
            op1 = false;
        }
        else
            break;
    }
    cout << ((str == "") ? "YES\n" : "NO\n");
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
