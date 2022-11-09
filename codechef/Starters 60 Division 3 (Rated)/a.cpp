#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> nums;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (nums.count(x)) {
            nums[x]++;
            continue;
        }
        nums[x] = 1;
    }
    if (nums.size() == 1) {
        cout << "0\n";
        return;
    }
    int maxi = INT_MIN;
    for (auto e : nums) {
        if (e.second > maxi) {
            maxi = e.second;
        }
    }
    cout << n - maxi << "\n";
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
