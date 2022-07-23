#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int ans = 0, co = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] == 1)
            co++;
        else
        {
            ans += (co * (co + 1)) / 2;
            co = 0;
        }
    if (arr[n - 1] == 1)
        ans += (co * (co + 1)) / 2;
    cout << ans << endl;
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
