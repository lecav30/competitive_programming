#include <bits/stdc++.h>
using namespace std;
#define ENDL << "\n"
#define long long ll
#define IN cin >>
#define OUT cout <<
#define JL cout << "\n"
#define MAXN 1000
#define MOD 1000000007

void solve() {
    int n;
    IN n;
    map<int, int> nums;
    for (int i = 0; i < n; ++i) {
        int x;
        IN x;
        if (nums.count(x))
            nums[x]++;
        else
            nums[x] = 1;
    }
    if (nums.size() & 1) {
        bool possible = false;
        for (auto e : nums) {
            if (e.second > 1) possible = true;
            if (possible) break;
        }
        OUT(possible ? "YES" : "NO") ENDL;
    } else
        OUT "YES" ENDL;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
