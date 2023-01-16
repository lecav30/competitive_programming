#include <limits.h>

#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    if (!(n & 1)) cout << "YES\n";
    else {
        if (!(x & 1)) cout << "NO\n";
        else cout << "YES\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    /* solve(); */
    return 0;
}
