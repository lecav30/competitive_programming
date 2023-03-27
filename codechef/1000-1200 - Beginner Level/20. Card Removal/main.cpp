#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    vector<int> freq(10, 0);
    for (int x : v) freq[x - 1]++;
    int total = 0;
    for (int x : freq) total += x;
    int max = *max_element(freq.begin(), freq.end());
    if (max == v.size())
        print(0);
    else
        print(total - max);
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
