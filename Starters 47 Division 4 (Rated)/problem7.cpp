#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    string s = "";

    string alphabet[26];
    for (int i = 0; i < 26; i++)
        alphabet[i] = char(97 + i);

    // for (int i = 0; i < 26; i++)
    //     cout << alphabet[i] << endl;

    bool op1 = true;
    bool possible = false;

    for (int i = 0; i < n && possible == false; ++i)
    {
        string temp;
        if (s == "")
            for (int j = 0; j < 26; ++j)
            {
                temp = a[i];
                if (alphabet[j] == temp)
                {
                    s += alphabet[j];
                    op1 = false;
                }
            }
        else
        {
            bool append = false;
            for (int j = n; j >= i; --j)
            {
                if (s + s == a.substr(0, j))
                {
                    s += s;
                    append = true;
                    i = j - 1;
                    op1 = true;
                    if (s + s == a)
                        possible = true;
                }
            }
            if (!append)
            {

                if (!op1)
                    break;
                else
                {
                    for (int j = 0; j < 26; ++j)
                    {
                        temp = a[i];
                        if (alphabet[j] == temp)
                        {
                            s += alphabet[j];
                            op1 = false;
                        }
                    }
                }
            }
        }
        if (s == a)
            possible = true;
        // cout << s << " ";
    }
    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
