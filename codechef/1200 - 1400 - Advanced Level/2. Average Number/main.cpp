#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n, k, v;
    cin >> n >> k >> v;
    int arr[n + k], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    // v = (k * a + sum(arr)) / (n + k)
    // v * (n + k) = k * a + sum(arr)
    // v * (n + k) - sum(arr) = k * a
    // a = (v * (n + k) - sum(arr)) / k
    int a = (v * (n + k) - sum) / k;
    if (a <= 0 || (a * k + sum) / (k + n) != v) {
        print(-1);
        return;
    }
    print(a);
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
