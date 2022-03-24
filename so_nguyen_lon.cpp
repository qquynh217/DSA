#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int a[1001][1001];
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string n, m;
        cin >> n >> m;
        int res = 0;
        for (int i = 0; i <= n.length(); i++)
        {
            for (int j = 0; j <= m.length(); j++)
            {
                if (i == 0 || j == 0)
                    a[i][j] = 0;
                else
                {
                    if (n[i - 1] == m[j - 1])
                        a[i][j] = a[i - 1][j - 1] + 1;
                    else
                        a[i][j] = max(a[i - 1][j], a[i][j - 1]);
                }
                res = max(res, a[i][j]);
            }
        }
        cout << res << endl;
    }
}