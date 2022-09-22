#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> nums;
    vector<char> signs;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] >= 48 && s[i] <= 57)
            nums.push_back(s[i] - '0');
        else
            signs.push_back(s[i]);
    sort(nums.begin(), nums.end());
    sort(signs.begin(), signs.end());
    reverse(signs.begin(), signs.end());
    // for (auto e : nums) cout << e << " ";
    string str;
    int j = 0;
    for (int i = 0; i < nums.size(); ++i) {
        string temp;
        temp = to_string(nums[i]);
        str.append(temp);
        if (j < signs.size()) {
            string aux(1, signs[j]);
            str.append(aux);
            j++;
        }
    }
    reverse(str.begin(), str.end());
    cout << str << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
