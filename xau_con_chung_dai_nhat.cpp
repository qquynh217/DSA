#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
void dodai(string a, string b)
{
    int n = a.length(), m = b.length();
    int l[n + 1][m + 1], res = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                l[i][j] = 0;
            else
            {
                if (a[i - 1] == b[j - 1])
                    l[i][j] = l[i - 1][j - 1] + 1;
                else
                    l[i][j] = max(l[i - 1][j], l[i][j - 1]);
            }
        }
    }
    cout << l[n][m] << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        dodai(a, b);
    }
}