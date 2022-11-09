#include <bits/stdc++.h>
using namespace std;
#define IN cin >>
#define OUT cout <<

void solve() {
    int n;
    IN n;
    int A[n];
    for (int i = 0; i < n; ++i) IN A[i];
    int m;
    IN m;
    set<int> B;
    for (int i = 0; i < m; ++i) {
        int x;
        IN x;
        B.insert(x);
    }

    for (int i = 0; i < n; ++i)
        if (!B.count(A[i])) OUT A[i] << " ";
    OUT "\n";
}

int main() {
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
