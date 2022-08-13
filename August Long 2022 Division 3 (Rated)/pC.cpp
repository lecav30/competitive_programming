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

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i < n; ++i)
        cin >> arr[i];
    ll tt = arr[1];
    int a = 1, b = 0;
    int current = 0;
    while (b < n) {
        if (arr[a + 1] < arr[a]) {
            current += arr[a + 1];
            a++;
            tt += arr[a + 1];
            if (current >= arr[b + 1]) {
                tt += current;
                current = 0;
                b++;
            }
        }
        else if (arr[a + 1] > arr[a]) {
            tt += arr[b] - current;
            b++;
            current = 0;
        }
        else {
            tt += arr[b];
            a++;
            b++;
        }
    }
    // A: 5
    // B: 
    // v: 5 2 6
    // r: 5 + 2 + 3 + 2 + 1 + 6 = 19
    cout << tt << endl;
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