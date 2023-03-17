#include <limits.h>

#include <algorithm>
#include <climits>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int min = 0, max = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '?' || s2[i] == '?') {
            max++;
        } else if (s1[i] != s2[i]) {
            min++;
            max++;
        }
    }
    cout << min << " " << max << "\n";
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
