#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cin >> q;
    while (q--) {
        int p, k;
        cin >> p >> k;
        vector<int> dishes, flavours;

        for (int i = 0; i < k; ++i)
            if (arr[i] % p) dishes.push_back(arr[i]);
        for (int i = 0; i < n; ++i)
            if (!(arr[i] % p)) flavours.push_back(arr[i]);

        sort(flavours.begin(), flavours.end());
        reverse(flavours.begin(), flavours.end());

        k -= dishes.size();

        int i = 0;
        while (k--) {
            dishes.push_back(flavours[i]);
            i++;
        }

        ll sum = 0;
        for (int i = 0; i < dishes.size(); ++i) sum += dishes[i];

        cout << sum << "\n";
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
