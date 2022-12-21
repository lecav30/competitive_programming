#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int a, b, c, arr[3];
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr, arr + 3);
    if (arr[2] == a) cout << "Alice\n";
    else if (arr[2] == b) cout << "Bob\n";
    else cout << "Charlie\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
