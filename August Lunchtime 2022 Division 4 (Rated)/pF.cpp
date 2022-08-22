#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define IN cin >>
#define OUT cout <<

void solve() {
    int n;
    IN n;
    // ll arr[n];
    map<ll, int> arr;
    for (int i = 0; i < n; ++i) {
        int x;
        IN x;
        if (arr.count(x))
            arr[x]++;
        else
            arr[x] = 1;
    }
    int maxi = n / 2;
    if (n & 1) maxi++;
    bool possible = true;
    for (auto e : arr) {
        if (e.second > maxi) possible = false;
        if (!possible) break;
    }
    OUT(possible ? "Yes\n" : "No\n");
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
