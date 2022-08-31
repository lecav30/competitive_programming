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
    vector<vector<int>> vec(n);
    for (int i = 0; i < n; ++i) {
        int m;
        IN m;
        for (int j = 0; j < m; ++j) {
            int x;
            IN x;
            vec[i].push_back(x);
        }
    }

    bool possible = false;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            possible = false;
            set<int> s;
            for (int k = 0; k < vec[i].size(); ++k) s.insert(vec[i][k]);
            for (int k = 0; k < vec[j].size(); ++k) s.insert(vec[j][k]);
            if (s.size() == 5) possible = true;
            for (auto e : s) OUT e << " ";
            JL;
            if (possible) break;
        }
    }

    OUT(possible ? "YES" : "NO") ENDL;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
