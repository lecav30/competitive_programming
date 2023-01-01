#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n <= 50) cout << "100\n";
    else if (n <= 100) cout << "50\n";
    else cout << "0\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* int tc; */
    /* cin >> tc; */
    /* while (tc--) solve(); */
    solve();
    return 0;
}
