#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<

void solve() {
    int a, b;
    IN a >> b;
    if (a == b)
        OUT "Yes\n";
    else {
        if (abs(a - b) & 1)
            OUT "No\n";
        else
            OUT "Yes\n";
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
