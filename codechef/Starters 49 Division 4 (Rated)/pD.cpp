#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int minAB, minBC, minAC;
    cin >> minAB >> minBC >> minAC;
    if (minAB < minAC && minAB < minBC)
        cout << "NO" << endl;
    else if (minBC < minAB && minBC < minAC)
        cout << "NO" << endl;
    else if (minAC < minAB && minAC < minBC)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
