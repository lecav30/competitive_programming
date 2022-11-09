#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

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

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];

    map<int, int> map;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (map.count(vec[i]))
            map[vec[i]]++;
        else
            map[vec[i]] = 1;
    }

    int id = -1;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (map[vec[i]] > 1)
        {
            id = i;
            map[vec[i]]--;
        }
    }

    if (id != -1)
        cout << (id + 1) << endl;
    else
        cout << 0 << endl;
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
