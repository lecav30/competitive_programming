#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int l;
    string s;
    cin >> l >> s;
    int c = 0;
    for (int i = 0; i < l; ++i) {
        if (s[i] == '.') continue;
        if (s[i] == 'H')
            c++;
        else
            c--;
        if (c >= 2 || c <= -1) {
            cout << "Invalid\n";
            return;
        }
    }
    if (c == 0)
        cout << "Valid\n";
    else
        cout << "Invalid\n";
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
