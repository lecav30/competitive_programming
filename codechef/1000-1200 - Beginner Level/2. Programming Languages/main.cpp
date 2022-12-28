#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if ((a == c && b == d) || (a == d && b == c)) {
        cout << "1\n";
    } else if ((a == e && b == f) || (a == f && b == e)) {
        cout << "2\n";
    } else
        cout << "0\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
