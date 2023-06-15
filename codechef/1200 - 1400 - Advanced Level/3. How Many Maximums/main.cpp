#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n;
    cin >> n;
    n--;
    string s;
    cin >> s;
    int maxis = 1;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] != s[i + 1] && s[i] == '1') {
            maxis++;
        }
    }
    cout << maxis << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
	return 0;
}
