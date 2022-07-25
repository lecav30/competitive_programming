#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void solve()
{
    int n, m;
    cin >> n >> m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
