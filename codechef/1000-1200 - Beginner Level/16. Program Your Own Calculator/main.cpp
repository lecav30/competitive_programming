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
    int a, b;
    char c;
    cin >> a >> b >> c;
    if (c == '+') {
        print(a + b);
    } else if (c == '-') {
        print(a - b);
    } else if (c == '*') {
        print(a * b);
    } else if (c == '/') {
        cout << setprecision(8) << (double)a / b << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* int tc; */
    /* cin >> tc; */
    /* while (tc--) solve(); */
    solve();
    return 0;
}
