#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    string s;
    int n;
    cin >> n >> s;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u') {
            count = 0;
        } else
            count += 1;
        if (count >= 4) {
            cout << "NO\n";
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
    return 0;
}
