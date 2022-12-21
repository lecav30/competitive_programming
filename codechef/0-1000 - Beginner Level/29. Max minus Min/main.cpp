#include <iostream>
using namespace std;

void solve() {
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    cout << arr[2] - arr[0] << "\n";
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
