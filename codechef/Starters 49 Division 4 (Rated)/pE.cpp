#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> A;
    int max = 0, val;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (A.count(x))
            A[x]++;
        else
            A[x] = 1;
        if (A[x] > max)
        {
            max = A[x];
            val = x;
        }
    }
    // int values[100000];
    // for (int i = 1; i <= 100000; ++i)
    //     values[i - 1] = i;
    int noExist = 0;
    for (int i = 1; i <= 100000; ++i)
        if (A.count(i) == 0)
        {
            noExist = i;
            break;
        }
    if (noExist == 0)
        cout << 2 << endl;
    else
    {
        A[val] /= 2;
        A[noExist] = max - A[val];
        max = 0;
        for (auto e : A)
            if (e.second > max)
                max = e.second;
        cout << max << endl;
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
