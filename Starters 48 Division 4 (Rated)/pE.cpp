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

    int ones = 0, zeroes = 0;
    for (int i = 0; i < n; ++i)
        if (str[i] == '1')
            ones++;
        else
            zeroes++;
    if (zeroes >= ones)
        for (int i = 0; i < zeroes; ++i)
            cout << '0';
    else
        for (int i = 0; i < ones; ++i)
            cout << '1';
    cout << endl;
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
