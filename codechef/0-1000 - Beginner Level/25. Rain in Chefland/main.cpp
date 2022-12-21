#include <iostream>
using namespace std;

void solve() 
{
    int n;
    cin >> n;
    if (n < 3) cout << "LIGHT\n";
    else if (n >= 3 && n < 7) cout << "MODERATE\n";
    else cout << "HEAVY\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
