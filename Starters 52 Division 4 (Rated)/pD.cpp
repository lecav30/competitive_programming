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

ll factorial(int n) {
    if (n == 1) return 1;
    return n * factorial(n - 1);
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

bool isPrime(int n) {
    if (n == 0 || n == 1 || n == 4) return false;
    for (int x = 2; x < n / 2; x++) {
        if (n % x == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (*s.begin() == 1)
        cout << n << endl;
    else {
        if (s.count(2)) {
            bool odd = false;
            for (auto e : s)
                if (e & 1) odd = true;
            if (odd)
                cout << n << endl;
            else
                cout << 2 * n << endl;
        } else {
            int lessPrime = 0, countPrime = 0;
            for (auto e : s) {
                if (e & 1) {
                    if (e & 1) {
                        if (isPrime(e)) {
                            if (lessPrime == 0) lessPrime = e;
                            countPrime++;
                        }
                    }
                    if (countPrime == 2) break;
                }
            }
            if (countPrime == 2)
                cout << n << endl;
            else {
                if (lessPrime != 0) cout << n * lessPrime << endl;
            }
        }
    }
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
