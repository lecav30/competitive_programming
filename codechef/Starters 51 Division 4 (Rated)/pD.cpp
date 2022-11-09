#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int sumDigits(int n)
{
    int sum = 0;
    while (n / 10 > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    sum += n % 10;
    return sum;
}

long long power(int x, int y)
{
    long long answer = 1;
    for (int i = 1; i <= y; i++)
        answer *= x;
    return answer;
}

long long factorial(int n)
{
    long long ret = 1;
    while (n > 1)
        ret *= n--;
    return ret;
}

vector<int> arrToVec(int arr[], int n)
{
    vector<int> vec;
    for (int i = 0; i < n; ++i)
        vec.push_back(arr[i]);
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
            if ((mask >> bit) & 1)
                cout << " " << C[bit];
        }
        cout << endl;
    }
 */

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int cant = __builtin_popcount(n);
    if (cant != 1)
        ans = cant - 1;
    cout << ans << endl;
}

int main()
{
    // clock_t ini = clock();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    // clock_t fin = clock();
    // double run_time = (double)(fin - ini) / CLOCKS_PER_SEC;
    // cout << "runtime: " << fixed << setprecision(2) << run_time << endl;
    return 0;
}
