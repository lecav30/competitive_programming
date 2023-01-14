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
    int n, k;
    cin >> n >> k;

    vector<int> vec(n);

    for (int i = 0; i < n; ++i) cin >> vec[i];

    int availableProtein = 0;

    for (int i = 0; i < n; ++i) {
        int todayProtein = vec[i] + availableProtein;
        if (todayProtein - k >= 0)
            availableProtein = todayProtein - k;
        else {
            cout << "NO " << i + 1 << "\n";
            return;
        }
    }
    cout << "YES\n";
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
