#include <algorithm>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < 2 * n; ++i) {
        int x;
        cin >> x;
        if (m.count(x))
            m[x]++;
        else
            m[x] = 1;
    }
    for (auto v : m) {
        if (v.second >= 3) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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
