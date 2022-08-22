#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define IN cin >>
#define OUT cout <<

void solve() {
    int n;
    IN n;
    ll arr[n];
    for (int i = 0; i < n; ++i) IN arr[i];
    if (n == 1)
        OUT abs(arr[0]) << endl;
    else {
        for (int i = 0; i < n - 1; ++i) {
            if (arr[i + 1] >= 1) {
                if (arr[i + 1] == 1 && arr[i] != -1) {
                    arr[i + 1] -= 2;
                    arr[i]--;
                } else {
                    int c = abs(arr[i + 1]) / 2;
                    arr[i + 1] -= (2 * c);
                    arr[i] -= c;
                }
            }
        }
        int total = 0;
        for (int i = 0; i < n; ++i) total += abs(arr[i]);
        OUT total << endl;
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
