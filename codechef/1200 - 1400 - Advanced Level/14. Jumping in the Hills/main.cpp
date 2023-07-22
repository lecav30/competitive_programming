#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
typedef long long ll;

void solve() {
    int n, u, d;
    cin >> n >> u >> d;
    vector<int> h(n);
    for (auto &i : h) cin >> i;
    bool jump = true;
    int i;
    for (i = 0; i < n - 1; ++i) {
        if (h[i + 1] >= h[i] && h[i + 1] - h[i] <= u)
            continue;
        else if (h[i + 1] < h[i] && (h[i] - h[i + 1] <= d || jump)) {
            if (h[i] - h[i + 1] > d) jump = false;
        } else
            break;
    }
    cout << i + 1 << endl;
}

int main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
