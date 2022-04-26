#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int n, a[20][20], vs[20];
int res, temp, dem, cmin;
void Way(int i)
{
    if (temp + cmin * (n - i + 1) >= res)
        return;
    for (int j = 1; j <= n; j++)
    {
        if (!vs[j])
        {
            vs[j] = 1;
            temp += a[i][j];
            dem++;
            if (dem == n)
            {
                res = min(res, temp + a[j][1]);
            }
            else if (dem < n)
                Way(j);
            vs[j] = 0;
            temp -= a[i][j];
            dem--;
        }
    }
}
int main()
{
    memset(vs, 0, sizeof vs);
    res = cmin = INT_MAX;
    temp = 0;
    dem = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
                cmin = min(a[i][j], cmin);
        }
    vs[1] = 1;
    Way(1);
    cout << res;
}