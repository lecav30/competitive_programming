#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<

void solve() {
    float arr[3];
    float total = 0;
    for (int i = 0; i < 3; ++i) {
        IN arr[i];
        total += arr[i];
    }
    bool fail = false;
    for (int i = 0; i < 3; ++i) {
        if ((total - arr[i]) / (float)2 < 35) fail = true;
    }
    OUT(fail ? "Fail\n" : "Pass\n");
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
