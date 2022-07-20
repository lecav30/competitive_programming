#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    if (str == revStr)
        cout << str << endl;
    else
    {
        for (int i = 0; i < str.length() / 2; ++i)
        {
            if (str[i] != str[str.length() - i - 1])
            {
                string temp = str, aux = str;

                // borrar al inicio
                temp.erase(temp.begin() + i);
                string temp1 = temp;
                // borrar al final
                aux.erase(aux.begin() + (aux.length() - i - 1));
                string temp2 = aux;
                // cout << "temp2 " << temp2 << endl;

                string revTemp1 = temp1;
                reverse(revTemp1.begin(), revTemp1.end());
                string revTemp2 = temp2;
                reverse(revTemp2.begin(), revTemp2.end());
                // borar al final el que se borro al inicio
                temp.erase(temp.begin() + (temp.length() - i - 1));
                string revTemp = temp;
                reverse(revTemp.begin(), revTemp.end());

                if (revTemp1 == temp1)
                    str = temp1;
                else if (revTemp2 == temp2)
                    str = temp2;
                else if (revTemp == temp)
                    str = temp;
                else
                    str = temp1;

                // cout << "temp " << temp << endl;
                // cout << "revTemp " << revTemp << endl;
            }
            revStr = str;
            reverse(revStr.begin(), revStr.end());
            // terminar cuando sea palindromo
            if (str == revStr)
                break;
        }
        cout << str << endl;
    }
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
