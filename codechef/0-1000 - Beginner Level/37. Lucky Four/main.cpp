#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    string n;
    cin >> n;
    int ans = count(n.begin(), n.end(), '4');
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
