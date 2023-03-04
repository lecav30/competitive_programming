#include <limits.h>

#include <algorithm>
#include <climits>
#include <cstring>
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
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 1000; ++i) {
        if (i & 1)
            a -= i;
        else
            b -= i;
        if (a < 0) {
            print("Bob");
            return;
        }
        if (b < 0) {
            print("Limak");
            return;
        }
    }
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
