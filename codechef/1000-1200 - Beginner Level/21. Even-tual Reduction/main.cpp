#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    vector<int> freq(26);
    for (int i = 0; i < n; ++i) {
        freq[s[i] - 'a']++;
    }
    for (int x : freq) {
        if (x % 2 != 0) {
            print("NO");
            return;
        }
    }
    print("YES");
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
