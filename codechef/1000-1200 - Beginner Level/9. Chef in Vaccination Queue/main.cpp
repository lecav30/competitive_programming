#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n, p, x, y;
    cin >> n >> p >> x >> y;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int time = 0;
    for (int i = 1; i <= n; ++i) {
        if (i != p) {
            if (arr[i - 1])
                time += y;
            else
                time += x;
        } else {
            time += y;
            break;
        }
    }
    cout << time << "\n";
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
