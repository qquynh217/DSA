#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
struct CongViec
{
    int deadl, pro, id;
};
bool cmp(CongViec a, CongViec b)
{
    return a.pro > b.pro;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        CongViec a[1005];
        cin >> n;
        int f[1005] = {0}, dem = 0, res = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i].id >> a[i].deadl >> a[i].pro;
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            int k = a[i].deadl - 1;
            while (f[k] == 1 && k >= 0)
            {
                k--;
            }
            f[k] = 1;
            if (k >= 0)
            {
                dem++;
                res += a[i].pro;
            }
        }
        cout << dem << ' ' << res << endl;
    }
}