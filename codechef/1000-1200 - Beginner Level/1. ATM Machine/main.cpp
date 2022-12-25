#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s = "";
    for (int i = 0; i < n; ++i) {
        if ((a - v[i]) >= 0) {
            s += "1";
            a -= v[i];
        } else
            s += "0";
    }
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
