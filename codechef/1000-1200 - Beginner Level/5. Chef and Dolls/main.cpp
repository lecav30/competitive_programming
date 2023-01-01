#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i += 2)
        if (arr[i] != arr[i + 1]) {
            cout << arr[i] << "\n";
            break;
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
