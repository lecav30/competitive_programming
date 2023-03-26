// #include <limits.h>

// #include <algorithm>
// #include <climits>
// #include <cstring>
// #include <iomanip>
// #include <iostream>
// #include <map>
// #include <string>
// #include <vector>

#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print(T t) {
    cout << t << "\n";
}

void solve() {
    int n, b;
    cin >> n >> b;
    vector<int> area;
    for (int i = 0; i < n; ++i) {
        int w, h, p;
        cin >> w >> h >> p;
        if (p <= b)
            area.push_back(w * h);
    }
    if (area.size() == 0)
        print("no tablet");
    else
        print(*max_element(area.begin(), area.end()));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    /* solve(); */
    return 0;
}
