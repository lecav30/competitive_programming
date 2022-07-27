#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s, r;
    cin >> s >> r;
    int count = 0;
    for (int i = 0; i < n; i++)
        if (s[i] != r[i])
            count++;
    cout << (count % 2 == 0 ? 1 : 0) << endl;
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
