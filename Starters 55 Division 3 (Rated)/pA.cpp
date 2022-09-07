#include <bits/stdc++.h>
using namespace std;
#define IN cin >>
#define OUT cout <<
#define ENDL "\n";

void solve() {
    int x, y;
    IN x >> y;
    if (x < y) OUT "REPAIR\n";
    if (x > y) OUT "NEW PHONE\n";
    if (x == y) OUT "ANY\n";
}

int main() {
    int tc;
    IN tc;
    while(tc--) solve();
    return 0;
}
