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

/*
 * # BITMASK
    O(2^n * n) -> n <= 22
    (1 << n) = (1 * 2^n)
    Subsets
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        cout << "mask " << mask << " -> ";
        for (int bit = 0; bit < n; ++bit)
        {
            // subconjunto
            if ((mask >> bit) & 1)
                cout << " " << C[bit];
            // complemento del subconjunto
            if ((~mask >> bit) & 1)
                cout << " " << C[bit];
        }
        cout << endl;
    }
 */

void solve() {
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; ++i) cin >> arr[i];

    ll tt = arr[0];
    int a = 0, b = -1;
    int progressB = 0, progressA = 0;

    while (b < n) {
        // bool prog = false;
        // if (a - b > 1) prog = true;

        if (arr[a] >= arr[a + 1]) {
            progressB += arr[a + 1];
            a++;
        } else {
            if (a - b) {
                // waiting time
                tt += arr[a + 1] - progressA;
                progressA = 0;
                a++;
            } else {
                int temp = arr[b + 1] - progressB;
                if (a == n - 1) a--;
                if (arr[a + 1] >= temp) {
                    progressB += temp;
                    progressA += temp;
                } else {
                    progressB += arr[a + 1];
                    a++;
                }
            }
        }
        if (progressB == arr[b + 1]) {
            tt += progressB;
            progressB = 0;
            b++;
        }
    }
    cout << tt << endl;
}

int main() {
    // clock_t ini = clock();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--) solve();
    /* for (int i = 0; i < tc; ++i) */
    /* { */
    /*     cout << "Case " << i + 1 << ": "; */
    /*     solve(); */
    /*     cout << endl; */
    /* } */
    // clock_t fin = clock();
    // double run_time = (double)(fin - ini) / CLOCKS_PER_SEC;
    // cout << "runtime: " << fixed << setprecision(2) << run_time << endl;
    return 0;
}
