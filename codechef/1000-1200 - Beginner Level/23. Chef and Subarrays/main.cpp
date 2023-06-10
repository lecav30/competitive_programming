#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll sum = 0, prod = 1;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            prod *= arr[j];
            if (sum == prod)
                ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}