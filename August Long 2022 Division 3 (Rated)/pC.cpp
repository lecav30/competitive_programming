#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int sumDigits(int n) {
    int sum = 0;
    while (n / 10 > 0) {
        sum += n % 10;
        n /= 10;
    }
    sum += n % 10;
    return sum;
}

long long power(int x, int y) {
    long long answer = 1;
    for (int i = 1; i <= y; i++) answer *= x;
    return answer;
}

long long factorial(int n) {
    long long ret = 1;
    while (n > 1) ret *= n--;
    return ret;
}

vector<int> arrToVec(int arr[], int n) {
    vector<int> vec;
    for (int i = 0; i < n; ++i) vec.push_back(arr[i]);
    return vec;
}

void subsets(vector<int> &v) {
    int n = v.size();
    for (int mask = 0; mask < (1 << n); ++mask) {
        for (int bit = 0; bit < n; ++bit) {
            // subconjunto
            if ((mask >> bit) & 1) cout << " " << v[bit];
            // complemento del subconjunto
            if ((~mask >> bit) & 1) cout << " " << v[bit];
        }
        cout << endl;
    }
}

void solve() {
    int n;
    cin >> n;
    n--;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    ll tt = 0;
    int a = -1, b = -1;
    int progressB = 0, progressA = 0;

    while (b < n - 1) {
        int temp;
        if (a == n - 1)
            temp = arr[a];
        else
            temp = arr[a + 1];
        if (a - b >= 1) {
            if (arr[b + 1] - progressB >= temp) {
                progressB += temp;
                if (a < n - 1) {
                    a++;
                    progressA = 0;
                }
            } else {
                progressA += arr[b + 1] - progressB;
                progressB += arr[b + 1] - progressB;
            }
        } else {
            if (a == n - 1)
                progressB += temp;
            else {
                tt += temp - progressA;
                progressA += temp - progressA;
            }
        }
        if (progressB == arr[b + 1]) {
            tt += progressB;
            b++;
            progressB = 0;
        }
        if (progressA == arr[a + 1]) {
            a++;
            progressA = 0;
        }
    }
    cout << tt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
    // for (int i = 0; i < tc; ++i) {
    //     cout << "Case " << i + 1 << ": ";
    //     solve();
    //     cout << endl;
    // }
    return 0;
}
