#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int max_t, max_n, sum_n;
    cin >> max_t >> max_n >> sum_n;
    if (max_t * max_n <= sum_n)
        cout << max_n * max_n * max_t << "\n";
    else {
        int t = sum_n / max_n;
        int r = sum_n % max_n;
        cout << max_n * max_n * t + r * r << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
