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
    map<char, int> m;

    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        m['A' + i] = x;
    }

    for (auto &p : m) {
        if (p.second > 50) {
            print(p.first);
            return;
        }
    }
    print("NOTA");
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
