#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int x;
    cin >> x;
    int temp = x;

    // solo monedas
    if (temp < 10)
        cout << x << endl;
    else
    {
        // solo notas
        if (temp % 10 == 0)
            cout << 0 << endl;
        // ambos
        else
        {

            for (int i = 1; i < 10; ++i)
            {
                temp -= 1;
                if (temp % 10 == 0)
                    break;
            }
            cout << x - temp << endl;
        }
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
