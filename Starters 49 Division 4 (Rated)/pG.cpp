#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    bool equal = true;
    int max = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (i > 0 && arr[i] != arr[i - 1])
            equal = false;
        if (arr[i] > max)
            max = arr[i];
    }
    if (equal)
        cout << 0 << endl;
    else
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < max)
            {
                for (int j = i + 1; j < n; ++j)
                {
                    arr[j]++;
                    arr[i]--;
                    if (arr[i] == 0)
                        break;
                }
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
