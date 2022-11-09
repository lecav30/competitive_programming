#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve() {
    int n;
    cin >> n;
    int arr[n - 1];
    int maxi = -1, total = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        total += arr[i];
    }
    cout << maxi + total << endl;
    /*
        * EXPLANATION
        https://www.codechef.com/submit/TWOTRAINS?tab=solution
    */
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
