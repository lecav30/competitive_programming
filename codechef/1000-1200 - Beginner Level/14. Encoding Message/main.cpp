#include <limits.h>

#include <algorithm>
#include <climits>
#include <cstring>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    char lastChar = s[n - 1];
    for (int i = 0; i < n - 1; i += 2) {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }

    int tempnum;
    for (int i = 0; i < n; ++i) {
        tempnum = 0;
        if ((int)s[i] <= 109) {
            tempnum = (int)s[i] - 97;
            s[i] = (char)122 - tempnum;
        } else if ((int)s[i] >= 110) {
            tempnum = 122 - (int)s[i];
            s[i] = (char)97 + tempnum;
        }
    }
    cout << s << endl;
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
