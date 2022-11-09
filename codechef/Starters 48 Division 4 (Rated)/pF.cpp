#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> nums;

    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (nums.count(a))
            nums[a]++;
        else
            nums[a] = 1;
    }

    int ans = 0;
    while (n != 0)
    {
        ans++;
        int i = 0;
        for (auto &e : nums)
        {
            if (e.second == 0)
            {
                continue;
            }
            else
            {
                int jumps = e.first - i;
                if (jumps < e.second)
                {
                    i += jumps;
                    e.second -= jumps;
                    n -= jumps;
                }
                else
                {
                    i += e.second;
                    n -= e.second;
                    e.second = 0;
                }
            }
            if (n == 0)
                break;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
