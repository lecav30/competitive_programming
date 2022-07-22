#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    int x;
    vector<int> vec;
    for (int i = 1; i <= n; ++i)
        vec.push_back(i);
}

void test()
{
    int a = 5, b = 3, c;
    c = a & b;
    cout << "and " << c << endl;
    c = a | b;
    cout << "or " << c << endl;
    c = a ^ b;
    cout << "xor " << c << endl;
    c = ~a;
    cout << "not " << c << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int tc;
    // cin >> tc;
    // while (tc--)
    //     solve();
    test();
    return 0;
}
