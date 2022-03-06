#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
int dem(int x, int y[], int m, int mark[])
{
    if (x == 0)
        return 0;
    if (x == 1)
        return mark[0];
    int vt = upper_bound(y, y + m, x) - y;
    int ans = m - vt;
    ans += mark[0] + mark[1];
    if (x == 2)
        ans -= (mark[3] + mark[4]);
    if (x == 3)
        ans += mark[2];
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x[n], y[m];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        int mark[5] = {0};
        for (int i = 0; i < m; i++)
        {
            cin >> y[i];
            if (y[i] < 5)
                mark[y[i]]++;
        }
        sort(y, y + m);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count += dem(x[i], y, m, mark);
        }
        cout << count << endl;
    }
}