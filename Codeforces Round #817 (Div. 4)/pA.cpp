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
    string s;
    IN s;
    char name[5] = {'T', 'i', 'm', 'u', 'r'};
    bool flag = true;
    
    for (int i = 0; i < 5 && flag; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
            if (name[i] == s[j]) count++;
        if (count > 1 || count == 0) flag = false; 
    }

    if (flag)
        OUT "YES" ENDL;
    else
        OUT "NO" ENDL;
}

int main() {
    int tc;
    IN tc;
    while (tc--) solve();
    return 0;
}
