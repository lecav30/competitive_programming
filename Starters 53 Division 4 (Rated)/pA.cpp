#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<

void solve() {
    int w, x, y, z;
    IN w;
    int arr[3];
    for (int i = 0; i < 3; ++i) IN arr[i];
    sort(arr, arr + 3);
    bool possible = false;
    do {
        int temp = w;
        for (int i = 0; i < 3; ++i) {
            if (arr[i] <= temp) temp -= arr[i];
        }
        if (temp == 0) possible = true;
    } while (next_permutation(arr, arr + 3));
    OUT(possible ? "YES" : "NO") << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
