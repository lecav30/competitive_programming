#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ENDL << "\n"
#define IN cin >>
#define OUT cout <<
#define JL cout << endl
#define MAXN 1000000
#define MOD 1000000007

void solve() {
    int n;
    IN n;
    string words[3][n];
    multiset<string> msWords;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j) {
            IN words[i][j];
            msWords.insert(words[i][j]);
        }

    int points[3];
    for (int i = 0; i < 3; ++i) points[i] = 0;

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < n; ++j) {
            if (msWords.count(words[i][j]) == 2) points[i] += 1;
            if (msWords.count(words[i][j]) == 1) points[i] += 3;
        }

    for (int i = 0; i < 3; ++i) OUT points[i] << " ";
    JL;
}

int main() {
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
